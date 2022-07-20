#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a=0,b=1,i,c;
    printf("enter the number\n");
    scanf("%d",&n);
    if(n==a||n==b)
        printf("fibonacci number\n");
        else
        {
            c=a+b;
            while(c<n){
                a=b;
                b=c;
                c=a+b;
            }
            if(c==n)
                printf("fibonacci number\n");
            else
                printf("not a fibonacci number");

        }





    getch();
    return 0;
}

