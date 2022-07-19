#include<stdio.h>
#include<conio.h>
int main()
{
   int n,count=0;
   printf("enter the number\n");
   scanf("%d",&n);
   do
   {
       n=n/10;
       count++;
   }while(n!=0);
    printf("%d digit",count);

    getch();
    return 0;
}

