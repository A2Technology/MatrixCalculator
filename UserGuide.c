#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include "A2Matrix.h"

void userguide(void)
{
    system("cls");
    printf(">> USER GUIDE <<\n\n");
    printf("In the first screen <MATRIX>, press any key to continue. \n\n");

    printf("In Main Menu: \n\n\n");

    printf("I.   Press number 1 and Enter to select function. \n\n");

    printf("        1. Check symmetry \n");
    printf("           -Check whether the matrix is symmetric or not.\n");

    printf("        2. Find transpose matrix \n");
    printf("           -Find the transpose of a matrix\n");

    printf("        3. Find determinant \n");
    printf("           -Find the determinant of a matrix\n");

    printf("        4. Find product \n");
    printf("           -Find the product of two matrices\n");

    printf("        5. Check identicality \n");
    printf("           -Check whether two matrices are the same or not\n");

    printf("        6. Check contain \n");
    printf("           -Check whether a matrix is contained in another matrix\n");

    printf("        7. Find relation factor \n");
    printf("           -Check if a matrix is creatred from another by adding, subtracting, multiplying or divising by a factor.\n");

    printf("        8. Find Max of matrix \n");
    printf("           -Find the largest index in a matrix\n");

    printf("        9. Find Min of matrix \n");
    printf("           -Find the smallest index in a matrix\n\n\n");

    printf("II.  Press number 2 and Enter to read User Guide that you are reading :\n");
    printf("     Then, press any key to turn back the main menu. \n\n\n");

    printf("III. Press number 3 and Enter to read About Program \n");
    printf("     Then, press any key to turn back the main menu. ");

    printf("\n\nError code:\n");
    printf("Dimension Error: 100111\n");
    printf("Math Error:      100222\n");
    getch();
}

void note1(void)
{
    system("cls");
    printf(">> NOTE <<\n\n");
    printf("-------------------------\n");
    printf("This function will calculate matrices in double type only\n");
    printf("-------------------------\n\n\n");
}
