#include<stdio.h>
#include<conio.h>
int main()
{
   float cp,sp,profit, loss;

   printf("enter the cost and selling price\n");
   scanf("%f%f",&cp,&sp);
   if(sp>cp)
   {
     profit= (((sp-cp)/cp )*100);
     printf("profit=%f",profit);

   }
   else
   {
       loss=(((cp-sp)/cp)*100);
       printf("loss=%f%%",loss);
   }

    getch();
    return 0;
}

