#include <stdio.h>
//#include "A2Matrix.h"

int addition(double matrix1[30][30], double matrix2[30][30], int R1, int C1, int R2, int C2, double matrix3[30][30])
{
    //take addition of two matrices
    int i, j;
    if (R1 == R1 && C1 == C2)
    {
        for (i = 1; i <= R1; i++)
            for (j = 1; j <= C1; j++)
            {
                matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        return 1;
    }
    else
    {
        printf("Error code: 100111\nDimension Error!!!");
        return 100111;
    }
}

int subtraction(double matrix1[30][30], double matrix2[30][30], int R1, int C1, int R2, int C2, double matrix3[30][30])
{
    //take subtraction of two matrices

    int i, j;
    if (R1 == R1 && C1 == C2)
    {
        for (i = 1; i <= R1; i++)
            for (j = 1; j <= C1; j++)
            {
                matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
            }
        return 1;
    }
    else
    {
        printf("Error code: 100111\nDimension Error!!!");
        return 100111;
    }
}

int matrix_multiply(double matrix1[30][30], double matrix2[30][30], int R1, int C1, int R2, int C2, double matrix3[30][30])
{
    //take product of two matrices
    int i, j, r;
    double sum;
    if (C1 == R2)
    {
        for (i = 1; i <= R1; i++)
        {
            for (j = 1; j <= C2; j++)
            {
                sum = 0;
                for (r = 1; r <= R1; r++)
                {
                    sum += matrix1[i][r] * matrix2[r][j];
                }
                matrix3[i][j] = sum;
            }
        }
        return 1;
    }
    else
    {
        printf("Error code: 100111\nDimension Error!!!");
        return 100111;
    }
}

int scalar_multiply(double K, double matrix[30][30], int R, int C, double ans[30][30])
{
    //take product a matrix and a number ans=K*matrix
    int i, j;
    for (i = 1; i <= R; i++)

        for (j = 1; j <= C; j++)
        {
            ans[i][j] = K * matrix[i][j];
        }
    return 1;
}
