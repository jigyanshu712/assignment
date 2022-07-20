#include<stdio.h>
#include<conio.h>
int main()
{
   int n;
   printf("enter the number\n");
   scanf("%d",&n);
   if(n%2==0&&n%3==0)
    printf("it is  divisible by 2 and 3");
   else
    printf("it is  not divisible by 2 and 3");


    getch();
    return 0;
}

