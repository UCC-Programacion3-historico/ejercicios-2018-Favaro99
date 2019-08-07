#include <random>
#include <chrono>
#include "MazeGenerator.h"

MazeGenerator::MazeGenerator(unsigned int ancho, unsigned int alto) {
    this->w = ancho;
    this->h = alto;

    dirs.push_back(new DIR(1, 0, -1)); // N
    dirs.push_back(new DIR(2, 0, 1));  // S
    dirs.push_back(new DIR(4, 1, 0));  // E
    dirs.push_back(new DIR(8, -1, 0)); // O

    dirs[0]->opposite = dirs[1];
    dirs[1]->opposite = dirs[0];
    dirs[2]->opposite = dirs[3];
    dirs[3]->opposite = dirs[2];

    // Lleno la matriz
    maze = new int *[this->w];
    for (int i = 0; i < this->w; i++)
        maze[i] = new int[this->h];

    generateMaze(0, 0);
}

MazeGenerator::~MazeGenerator() {
    for (int i = 0; i < w; i++)
        delete maze[i];

    delete maze;
}

void MazeGenerator::display() {
    for (int i = 0; i < h; i++) {
        // draw the north edge
        for (int j = 0; j < w; j++) {
            cout << ((maze[j][i] & 1) == 0 ? "+---" : "+   ");
        }
        cout << ("+") << endl;
        // draw the west edge
        for (int j = 0; j < w; j++) {
            cout << ((maze[j][i] & 8) == 0 ? "|   " : "    ");
        }
        cout << ("|") << endl;
    }
    // draw the bottom line
    for (int j = 0; j < w; j++) {
        cout << ("+---");
    }
    cout << ("+") << endl;
}

void MazeGenerator::generateMaze(int cx, int cy) {
    int seed = std::chrono::system_clock::now().time_since_epoch().count();
    shuffle(dirs.begin(), dirs.end(), std::default_random_engine(seed));
    for (DIR *dir : dirs) {
        int nx = cx + dir->dx;
        int ny = cy + dir->dy;
        if (between(nx, w) && between(ny, h)
            && (maze[nx][ny] == 0)) {
            maze[cx][cy] |= dir->bit;
            maze[nx][ny] |= dir->opposite->bit;
            generateMaze(nx, ny);
        }
    }
}

bool MazeGenerator::between(int v, int upper) {
    return (v >= 0) && (v < upper);
}


int MazeGenerator::getData(unsigned x, unsigned y) {
    if (x > this->w || y > this->h)
        return -1;

    return maze[x][y];
}

bool MazeGenerator::esVisitado(unsigned x, unsigned y) {
    return (maze[x][y] & 16) != 0;
}

void MazeGenerator::visitar(unsigned x, unsigned y) {
    maze[x][y] |= 0x10;
}

unsigned int MazeGenerator::getW() const {
    return w;
}

unsigned int MazeGenerator::getH() const {
    return h;
}
