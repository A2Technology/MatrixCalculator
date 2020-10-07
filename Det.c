#include <math.h>
#include "A2Matrix.h"

//determinant of m x m matrix
double determinant(double matrix[30][30], int R, int C)
{
    int delRC_coFactor(double matrix[30][30], int R, int C, int dR, int dC, double temp[30][30]);
    double determinant_2(double matrix[30][30], int R, int C);

    double det = 0;
    int i, j;
    double temp[30][30];
    if (R != C)
    {
        printf("Error code: 100111\nDimension Error!!!\nNot square matrix");
        return 100111;
    }
    else
    {
        if (R == 1)
            return matrix[1][1];
        else if (R == 2)
            return determinant_2(matrix, R, C);
        else
        {
            for (j = 1; j <= C; j++)
            {
                double temp[30][30];
                delRC_coFactor(matrix, R, C, 1, j, temp);
                det += matrix[1][j] * (pow(-1, 1 + j)) * determinant(temp, R - 1, C - 1);
            }
        }
    }
    //printf("%d\t", det);
    return det;
}

//determinant of a 2x2 matrix
double determinant_2(double matrix[30][30], int R, int C)
{
    if (R != C || R != 2 || C != 2)
    {
        printf("\n\n determinant_2 gets some higher order of matrix\n\n");
        return 0;
    }
    else
    {
        double det2 = 0;
        det2 = matrix[1][1] * matrix[2][2] - matrix[2][1] * matrix[1][2];
        return det2;
    }
}
