
#include "A2Matrix.h"

int is_thesame(double matrix1[30][30], double matrix2[30][30], int R1, int C1, int R2, int C2)
{
    //return 1 if two matrices are exactly the same
    //return 0 if two matrices are not the same
    int i, j;
    if (R1 != R2 || C1 != C2)
        return 0;
    else
    {
        for (i = 1; i <= R1; i++)
            for (j = 1; j <= C1; j++)
            {
                if (!is_equal(matrix1[i][j], matrix2[i][j]))
                    return 0;
                else
                    continue;
            }
    }
    return 1;
}
