#include<stdio.h>
long bin(int);
void main()
{
        int dno;
        long bno;
        printf("\n Enter decimal:");
        scanf("%d",&dno);
        bno=bin(dno);
        printf("\nDecimal to Binary converted value is %ld",bno);
}       
long bin(int dno)
{
        long bno=0,remainder,f=1;
        while(dno!=0)
        {
                remainder=dno%2;
                bno=bno+remainder*f;
                f=f*10;
                dno=dno/2;
        }
        return bno;
}

