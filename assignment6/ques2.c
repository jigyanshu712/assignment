#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0,i;
    printf("enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum=sum+2*i;

    }
    printf("the sum of n natural number is %d",sum);

    getch();
    return 0;
}
