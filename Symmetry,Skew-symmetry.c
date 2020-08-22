#include <stdio.h>
#include "A2Matrix.h"

int is_symmetric(double matrix[30][30], int R, int C)
{
    //return 1 if the matrix is symmetric
    //return 0 if the matrix is not symmetric
    int trans[30][30];
    void transpose(double matrix[30][30], int ROW, int COL, double trans[30][30]);
    int is_thesame(double matrix1[30][30], double matrix2[30][30], int R1, int C1, int R2, int C2);

    if (R == C)
    {
        transpose(matrix, R, C, trans);
        if (is_thesame(matrix, trans, R, R, R, R))
            return 1;
        else
            return 0;
    }
    else
        return 0;
}

int is_skew_symmetric(double matrix[30][30], int R, int C)
{
    //return 1 if the matrix is skew-symmetric
    //return 0 if the matrix is not skew-symmetric
    int trans[30][30];
    int ans[30][30];
    void transpose(double matrix[30][30], int ROW, int COL, double trans[30][30]);
    int is_thesame(double matrix1[30][30], double matrix2[30][30], int R1, int C1, int R2, int C2);
    int scalar_multiply(double K, double matrix[30][30], int R, int C, double ans[30][30]);
    if (R == C) //check square matrix
    {
        C = R; //now number of rows is equal to number of columns
        transpose(matrix, R, R, trans);
        scalar_multiply(-1, trans, R, R, ans);
        if (is_thesame(matrix, ans, R, R, R, R))
            return 1;
        else
            return 0;
    }
    else
        return 0;
}