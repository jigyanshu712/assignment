#include<stdio.h>
#include<conio.h>
int main()
{
    int x,r,sum=0;
    printf("enter the three digit numbers\n");
    scanf("%d",&x);
    r=x%10;
    sum=sum+r;
    x=x/10;

     r=x%10;
    sum=sum+r;
    x=x/10;

    r=x%10;
    sum=sum+r;
    x=x/10;

   printf("the sum of three digit number is %d\n",sum);



        getch();
    return 0;
}
