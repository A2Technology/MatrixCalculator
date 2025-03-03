#include <stdio.h>
#include "A2Matrix.h"

void enterIndex_INT(int matrix[30][30],int R, int C)
{
    //initialize the matrix
    int i,j;
    printf("Enter index\n");
	for(i=0; i<=R; i++)
	   for(j=0; j<=C; j++)
	   {
   		  matrix[i][j]=0;
   	   }
    //enter index of matrix
    printf("\n\n");
    for (i=1;i<=R;i++)
    {
        for (j=1;j<=C;j++)
        {
            printf("Enter a[%d][%d]:  ",i,j);
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}

void enterRC(int matrix[30][30],int *R, int *C, char Order)
{
    //enter number of row and column of a matrix
    //'Order' is matrix's name
    int r,c;
    do {
        r=0,c=0;
        printf("Enter row of matrix %c: ",Order);
        scanf("%d",&r);
        printf("Enter column of matrix %c: ",Order);
        scanf("%d",&c);
        *R=r;
        *C=c;
        if(r<=0||c<=0) printf("\n\nError code: 100222\nMath Error!!!\nNumber of row and column must be positive integers\n\n");
       }
    while (r<=0||c<=0);

}

void print_INT(int matrix[30][30],int R, int C)
{
    //print matrix int integers
    int i,j;
    printf("\n\n");
    for (i=1;i<=R;i++)
    {
        for (j=1;j<=C;j++)
        printf("%d\t",matrix[i][j]);
        printf("\n");
    }
    printf("\n\n");
}

void print_DOUBLE(double matrix[30][30],int R, int C)
{
    //print matrix int double
    int i,j;
    printf("\n\n");
    for (i=1;i<=R;i++)
    {
        for (j=1;j<=C;j++)
        printf("%10.10f\t\t",matrix[i][j]);

        printf("\n\n");
    }
    printf("\n\n");
}


void enterIndex_DOUBLE(double matrix[30][30],int R, int C)
{
    //initialize the matrix
    int i,j;
    printf("Enter index\n");
	for(i=0; i<=R; i++)
	   for(j=0; j<=C; j++)
	   {
   		  matrix[i][j]=0;
   	   }
    //enter index of matrix
    printf("\n\n");
    for (i=1;i<=R;i++)
    {
        for (j=1;j<=C;j++)
        {
            printf("Enter a[%d][%d]:  ",i,j);
            scanf("%lf",&matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}



void enterIndex_CHAR(int matrix[30][30],int R, int C)
{
    //initialize the matrix
    int i,j;
    printf("Enter index\n");
    fflush(stdin);
    //enter index of matrix
    printf("\n\n");
    for (i=1;i<=R;i++)
    {
        for (j=1;j<=C;j++)
        {
            printf("Enter a[%d][%d]:  ",i,j);
            scanf("%c",&matrix[i][j]);
            fflush(stdin);
        }
        printf("\n");
    }
    printf("\n\n");
}


void print_CHAR(int matrix[30][30],int R, int C)
{
    //print matrix int characters
    int i,j;
    printf("\n\n");
    for (i=1;i<=R;i++)
    {
        for (j=1;j<=C;j++)
        printf("%c\t",matrix[i][j]);
        printf("\n");
    }
    printf("\n\n");
}



