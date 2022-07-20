
#include<stdio.h>
#include<conio.h>
int main()
{
   int d,a,b,c;
   printf("enter the  coefficient of quardatic equation a,b and c \n");
   scanf("%d%d%d",&a,&b,&c);
   d=b*b-4*a*c;
   if(d>0)
    printf("real roots");
    else
        if(d<0)
        printf("imaginary");
        else
        printf("equal roots");


    getch();
    return 0;
}
