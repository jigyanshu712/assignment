#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
   printf("enter the number\n");
   scanf("%d",&n);
   if(n%7==0||n%3==0)
    printf("it is  divisible");
   else
    printf("it is  not divisible");



    getch();
    return 0;
}

