#include<stdio.h>
#include<conio.h>
int main()
{
    int n,f=1,i;
    printf("enter the number\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
       f=f*i;

    }
    printf("the sum of n natural number is %d",f);

    getch();
    return 0;
}

