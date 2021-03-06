#include "A2Matrix.h"

int relationFactor(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2)
{
    //return 1, 2, 3, 4 means + , - , * , /
    //return 0 means no relation
    double additionFactor(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2);
    double subtractionFactor(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2);
    double multiplicationFactor(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2);
    double divisionFactor(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2);

    double add = 0, sub = 0, mul = 0, div = 0;

    if (R1 != R2 || C1 != C2)

    {
        printf("\n\nError code 100111\nDimension Error!!!\nNot the same size");
        return 100111;
    }
    add = additionFactor(m1, m2, R1, C1, R2, C2);
    sub = subtractionFactor(m1, m2, R1, C1, R2, C2);
    mul = multiplicationFactor(m1, m2, R1, C1, R2, C2);
    div = divisionFactor(m1, m2, R1, C1, R2, C2);

    if (add != 0 || sub != 0 || mul != 0 || div != 0)
    {
        add = additionFactor(m1, m2, R1, C1, R2, C2);
        sub = subtractionFactor(m1, m2, R1, C1, R2, C2);
        mul = multiplicationFactor(m1, m2, R1, C1, R2, C2);
        div = divisionFactor(m1, m2, R1, C1, R2, C2);
        printf("\nMatrix 2 is produced from matrix 1 by these operation:\n\n");
        if (add)
            printf("Added by      \t%10.10f\n", add);
        if (sub)
            printf("Subtracted by \t%10.10f\n", sub);
        if (mul)
            printf("Multiplied by \t%10.10f\n", mul);
        if (div)
            printf("Divided by    \t%10.10f\n", div);

        printf("\n\nOr\n\n");
        add = additionFactor(m2, m1, R1, C1, R2, C2);
        sub = subtractionFactor(m2, m1, R1, C1, R2, C2);
        mul = multiplicationFactor(m2, m1, R1, C1, R2, C2);
        div = divisionFactor(m2, m1, R1, C1, R2, C2);
        printf("\nMatrix 1 is produced from matrix 2 by these operation:\n\n");
        if (add)
            printf("Added by      \t%10.10f\n", add);
        if (sub)
            printf("Subtracted by \t%10.10f\n", sub);
        if (mul)
            printf("Multiplied by \t%10.10f\n", mul);
        if (div)
            printf("Divided by    \t%10.10f\n", div);
        return 1; //confirm that m1 and m2 has a relation
    }
    else
    {
        printf("No relation");
        return 0;
    }
}

double additionFactor(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2)
{
    int i, j, f;

    f = m2[1][1] - m1[1][1];
    if (f < 0)
        return 0; //if f<0, move to function subtractionFactor_DOUBLE

    for (i = 1; i <= R1; i++)
        for (j = 1; j <= C1; j++)
        {
            if ((m2[i][j] - m1[i][j]) != f)
                return 0;
            else
                continue;
        }
    return f;
}

double subtractionFactor(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2)
{
    int i, j;
    double f;
    f = m1[1][1] - m2[1][1];
    if (f < 0)
        return 0; //if f<0, move to function additionFactor_DOUBLE
    for (i = 1; i <= R1; i++)
        for (j = 1; j <= C1; j++)
        {
            if (!is_equal((m1[i][j] - m2[i][j]), f))
                return 0;
        }
    return f;
}

double multiplicationFactor(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2)
{
    int i, j;
    double f;

    f = m2[1][1] / m1[1][1];
    if (f < 1 && f > -1)
        return 0; //if f<1&&f>-1, move to function divisionFactor_DOUBLE
    for (i = 1; i <= R1; i++)
        for (j = 1; j <= C1; j++)
        {
            if (!is_equal((m2[i][j] / m1[i][j]), f) || is_equal(m1[i][j], 0) || is_equal(m2[i][j], 0))
                return 0;
        }
    return f;
}

double divisionFactor(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2)
{
    int i, j;
    double f;

    f = m1[1][1] / m2[1][1];
    if (f < 1 && f > -1)
        return 0; //if f<1 &&f >-1, move to function multiplicationFactor_DOUBLE
    for (i = 1; i <= R1; i++)
        for (j = 1; j <= C1; j++)
        {
            if (!is_equal((m1[i][j] / m2[i][j]), f) || is_equal(m1[i][j], 0) || is_equal(m2[i][j], 0))
                return 0;
        }
    return f;
}
