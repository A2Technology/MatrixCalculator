#include "A2Matrix.h"
int contain_INT(int m1[30][30],int m2[30][30],int R1,int C1,int R2,int C2)
{
    int i,j,r,c,check=0;
    if (R1*C1>R2*C2)
    {
        //check if m1 contain m2
        for(i=1;i<=1+R1-R2;i++)
            for(j=1;j<=1+C1-C2;j++)
                {
                    if (m1[i][j]==m2[1][1])
                        {
                            check=1;
                            for(r=i,c=j;r<=i+R2-1,c<=j+C2-1;r++,c++)
                                {
                                    if(m1[r][c]!=m2[r-i+1][c-j+1]&&m1[r][c]
                                       !=' '&&m2[r-i+1][c-j+1]!=' ')
                                        {
                                            check=0;
                                            break;
                                        }
                                    else continue;
                                }
                        }
                    else continue;
                }
    if (check!=0) return check;
    }
    else if(R1*C1<R2*C2)
        {
            //check if m2 contain m1
            for(i=1;i<=1+R2-R1;i++)
                for(j=1;j<=1+C2-C1;j++)
                    {
                        if (m2[i][j]==m1[1][1])
                            {   check=2;
                                for(r=i,c=j;r<=i+R1-1,c<=j+C1-1;r++,c++)
                                    {
                                        if(m2[r][c]!=m1[r-i+1][c-j+1]&&m2[r][c]
                                           !=' '&&m1[r-i+1][c-j+1]!=' ')
                                            {
                                                check=0;
                                                break;
                                            }
                                        else continue;
                                    }
                            }
                        else continue;

                    }
            if (check!=0) return check;
        }
        //do not compare if R1*C1==R2*C2
    else if(R1*C1==R2*C2) return 0;

}

int contain_DOUBLE(double m1[30][30],double m2[30][30],int R1,int C1,int R2,int C2)
{
    int eql(double A, double B);
    int Neql(double A, double B);
    int i,j,r,c,check=0;
        if (R1*C1>R2*C2)
    {
        //check if m1 contain m2
        for(i=1;i<=1+R1-R2;i++)
            for(j=1;j<=1+C1-C2;j++)
                {
                    if (eql(m1[i][j], m2[1][1]))
                        {   check=1;
                            int I=i;
                            int J=j;
                            for(r=I,c=J;r<=I+R2-1,c<=J+C2-1;r++,c++)
                                {
                                    if(Neql(m1[r][c],m2[r-I+1][c-J+1])&&m1[r][c]
                                       !=' '&&m2[r-I+1][c-J+1]!=' ')
                                        {
                                            check=0;
                                            break;
                                        }
                                    else continue;
                                }
                        }
                    else continue;

                }
    if (check!=0) return check;
    }
    else if(R1*C1<R2*C2)
        {
            //check if m2 contain m1
            for(i=1;i<=1+R2-R1;i++)
                for(j=1;j<=1+C2-C1;j++)
                    {
                        if (eql(m2[i][j], m1[1][1]))
                            {   check=2;
                                for(r=i,c=j;r<=i+R1-1,c<=j+C1-1;r++,c++)
                                    {
                                        if(Neql(m2[r][c],m1[r-i+1][c-j+1])&&m2[r][c]
                                           !=' '&&m1[r-i+1][c-j+1]!=' ')
                                            {
                                                check=0;
                                                break;
                                            }
                                        else continue;
                                    }
                            }
                        else continue;

                    }
            if (check!=0) return check;
        }
        //do not compare if R1*C1==R2*C2
    else if(R1*C1==R2*C2) return 0;
}

//return 1 means m1 contains m2
//return 2 means m2 contains m1
//return 0 means m1 and m2 has no relation
