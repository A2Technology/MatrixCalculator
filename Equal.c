#include <math.h>
#include "A2Matrix.h"

int is_equal(double A, double B)
{
    //compare two numbers
    //return 1 means equal
    //return 0 means not equal
    double E = 0.0000001; // E is the precision
    if (fabs(A - B) <= E)
        //If the difference between A and B is less than the precision E, it is assumed that A=B
        return 1;
    else
        return 0;
}
