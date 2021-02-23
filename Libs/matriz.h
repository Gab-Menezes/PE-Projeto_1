#ifndef MATRIZ
#define MATRIZ

#include <stdio.h>

#define MAX_COLS 15
#define MAX_ROWS 15

int** buildMatriz(void);
void readMatriz(FILE *file, int **matriz, int*rows, int*cols);
void printMatriz(int **matriz, int*rows, int*cols);

#endif 