#include "sumatoria.h"


int sumatoria(int *arr, unsigned int size) {
    if(size==1)
        return arr[0];
    else{
        size--;
        return arr[size] + sumatoria(arr,size);
    }
}