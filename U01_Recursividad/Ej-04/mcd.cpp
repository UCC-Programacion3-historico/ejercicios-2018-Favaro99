#include "mcd.h"

unsigned int mcd(unsigned int a, unsigned int b) {
    if(b==0)
        return a;
    else
        return mcd(b, a%b);
}