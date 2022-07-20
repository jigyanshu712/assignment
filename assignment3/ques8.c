
#include<stdio.h>
#include<conio.h>
int main()
{
   int n;
   printf("enter the number\n");
   scanf("%d",&n);
   if(n%100==0)
   {
       if(n%400==0)
        printf("it is a leap year");
        else
            printf("it is not a leap year");

   }
        else{
            if(n%4==0)
                printf("it is a leap year");
            else
                printf("it is not a leap year");
        }




    getch();
    return 0;
}
