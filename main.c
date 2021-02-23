#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Libs/csv.h"
#include "Libs/matriz.h"

int main(void) {

    // Atribui��o Variaveis/Ponteiros
    int rows, cols;
    int **matriz = buildMatriz();
    FILE *file = getArquivo("teste.csv");

    // Execu��o de Fun��es
    readMatriz(file, matriz, &rows, &cols);
    printf("O arquivo csv tem %d linhas e %d colunas", rows, cols);
    printf("\n");
    printMatriz(matriz, &rows, &cols);

    for (int i = 0; i < MAX_COLS + 1; i++)
    {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}