#include<stdio.h>
#include<conio.h>
int main()
{  int n,i;
printf("enter a number\n");
scanf("%d",&n);
for(i=2;i<=n-1;i++)
{
    if(n%i==0)
        break;
}
if(i==n)
    printf("it is  a prime number");
else
    printf("it is not a prime number");

    getch();
    return 0;
}
