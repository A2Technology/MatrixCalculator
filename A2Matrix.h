#ifndef __A2Matrix_H__
#define __A2Matrix_H__

#include "A2Matrix.h"
//functions for matrix in double type
//matrix input and output
void enterRC(int matrix[30][30], int *R, int *C, char matrix_name);
void enterMatrix(double matrix[][30], int R, int C);
void outputMatrix(double matrix[30][30], int R, int C);

//function finding whether a matrix is produce from the other by adding, subtracting, multiplying or dividing by a number
int relationFactor(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2);
double additionFactor(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2);
double subtractionFactor(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2);
double divisionFactor(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2);
double multiplicationFactor(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2);

//basic operation of matrices
int addition(double matrix1[30][30], double matrix2[30][30], int R1, int C1, int R2, int C2, double matrix3[30][30]);
int scalar_multiply(double K, double matrix[30][30], int R, int C, double ans[30][30]);
int matrix_multiply(double matrix1[30][30], double matrix2[30][30], int R1, int C1, int R2, int C2, double matrix3[30][30]);
int subtraction(double matrix1[30][30], double matrix2[30][30], int R1, int C1, int R2, int C2, double matrix3[30][30]);
void transpose(double matrix[30][30], int R, int C, double transpose[30][30]);
void delCol(double matrix[30][30], int R, int C, int dC, double temp[30][30]);
void delRow(double matrix[30][30], int R, int C, int dR, double temp[30][30]);
double MaxOfMatrix(double a[30][30], int R, int C);
double MinOfMatrix(double a[30][30], int R, int C);
int is_symmetric(double matrix[30][30], int R, int C);
int is_skew_symmetric(double matrix[30][30], int R, int C);

//basic comparison between two matrices
int is_contain(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2);
int is_thesame(double matrix1[30][30], double matrix2[30][30], int R1, int C1, int R2, int C2);

//finding determinant of a matrix
double determinant(double matrix[30][30], int R, int C);
double determinant_2(double matrix[30][30], int R, int C);
int delRC_coFactor(double matrix[30][30], int R, int C, int dR, int dC, double temp[30][30]);

//functions for controls and menus
//goto a point on the screen
void gotoxy(int x, int y);
//main logo
void main_logo(int X1, int Y1);
//menu1
void process_1(int X1, int Y1);
//menu2
void process_2(int X1, int Y1);
//quit or return
void QuitReturn(int X1, int Y1);
//about the project
void about(void);
//user guide
void userguide(void);

#endif
