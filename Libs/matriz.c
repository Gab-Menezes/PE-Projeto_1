#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Matriz.h"

int** buildMatriz() {
    int** matriz;
    matriz = (int**)malloc(MAX_ROWS * sizeof(int));
    for (int i = 0; i < MAX_ROWS; ++i) {
        matriz[i] = (int*)malloc(MAX_COLS * sizeof(int));
    }
    return matriz;
}


void readMatriz(FILE* arq, int** matriz, int* row, int* col) {
    int i = 0;
    char* token;
    char line[1024];
    while (fgets(line, sizeof(line), arq)) {
        int j = 0;
        for (token = strtok(line, ";"); token && *token; j++, token = strtok(NULL, ";")) {
            matriz[i][j] = atoi(token);
        }
        *col = j;
        i++;
    }
    *row = i;
    fclose(arq);
}


void printMatriz(int** matriz, int* rows, int* cols) {
    for (int i = 0; i < *rows; i++) {
        for (int j = 0; j < *cols; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}