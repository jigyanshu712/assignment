#include<stdio.h>
#include<conio.h>
int main()
{
   int n,rem,sum=0;
    printf("enter the  number\n");
    scanf("%d",&n);
    while(n!=0)
    { rem=n%10;
       sum=sum*10+rem;
       n=n/10;

    }
    printf("the reverse number is %d",sum);


    getch();
    return 0;
}

