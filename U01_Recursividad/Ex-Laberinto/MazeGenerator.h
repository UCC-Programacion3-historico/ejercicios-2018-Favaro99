#ifndef LABERINTO_MAZE_H
#define LABERINTO_MAZE_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class DIR {

public:
    int bit;
    int dx;
    int dy;
    DIR *opposite{};

    DIR(int bit, int dx, int dy) {
        this->bit = bit;
        this->dx = dx;
        this->dy = dy;
    }
};


/*
 * recursive backtracking algorithm
 * shamelessly borrowed from the ruby at
 * http://weblog.jamisbuck.org/2010/12/27/maze-generation-recursive-backtracking
 */
class MazeGenerator {
private:
    unsigned w;
    unsigned h;
public:

private:

    vector<DIR *> dirs;
    int **maze;

    void generateMaze(int cx, int cy);

    bool between(int v, int upper);

public:
    MazeGenerator(unsigned ancho, unsigned alto);

    ~MazeGenerator();

    int getData(unsigned x, unsigned y);

    bool esVisitado(unsigned x, unsigned y);

    void visitar(unsigned x, unsigned y);

    void display();

    unsigned int getW() const;

    unsigned int getH() const;
};

#endif //LABERINTO_MAZE_H
