#include <stdio.h>
#include <stdlib.h>
#include "A2Matrix.h"

void transpose(double matrix[30][30], int R, int C, double transpose[30][30])
{
    //Find transpose of a matrix
    int i, j;
    for (i = 1; i <= R; i++)
        for (j = 1; j <= C; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
}
