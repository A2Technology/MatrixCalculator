#include "A2Matrix.h"

int is_contain(double matrix1[][30], double matrix2[][30], int R1, int C1, int R2, int C2)
{
    int is_equal(double A, double B);
    int i, j, r, c, check = 0;
    if (R1 * C1 > R2 * C2)
    {
        //check if matrix1 contain matrix2s
        for (i = 1; i <= 1 + R1 - R2; i++)
            for (j = 1; j <= 1 + C1 - C2; j++)
            {
                if (is_equal(matrix1[i][j], matrix2[1][1]))
                {
                    check = 1;
                    int I = i;
                    int J = j;
                    for (r = I, c = J; r <= I + R2 - 1, c <= J + C2 - 1; r++, c++)
                    {
                        if (!is_equal(matrix1[r][c], matrix2[r - I + 1][c - J + 1]) && matrix1[r][c] != ' ' && matrix2[r - I + 1][c - J + 1] != ' ')
                        {
                            check = 0;
                            break;
                        }
                        else
                            continue;
                    }
                }
                else
                    continue;
            }
        if (check != 0)
            return check;
    }
    else if (R1 * C1 < R2 * C2)
    {
        //check if matrix2 contain matrix1
        for (i = 1; i <= 1 + R2 - R1; i++)
            for (j = 1; j <= 1 + C2 - C1; j++)
            {
                if (is_equal(matrix2[i][j], matrix1[1][1]))
                {
                    check = 2;
                    for (r = i, c = j; r <= i + R1 - 1, c <= j + C1 - 1; r++, c++)
                    {
                        if (!is_equal(matrix2[r][c], matrix1[r - i + 1][c - j + 1]) && matrix2[r][c] != ' ' && matrix1[r - i + 1][c - j + 1] != ' ')
                        {
                            check = 0;
                            break;
                        }
                        else
                            continue;
                    }
                }
                else
                    continue;
            }
        if (check != 0)
            return check;
    }
    //do not compare if R1*C1==R2*C2
    else if (R1 * C1 == R2 * C2)
        return 0;
}

//return 1 means matrix1 contains matrix2
//return 2 means matrix2 contains matrix1
//return 0 means matrix1 and matrix2 has no relation
