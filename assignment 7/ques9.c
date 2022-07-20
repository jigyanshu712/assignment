#include<stdio.h>
#include<conio.h>
int main()
{
    int x,rem,sum=0,temp;
    printf("enter the number\n");
    scanf("%d",&x);
    temp=x;
    while(x!=0)
    {
        rem=x%10;
        sum=sum+rem*rem*rem;
        x=x/10;

    }
    if(sum==temp)
        printf("it is a armstrong number");
    else
        printf("it is not a armstrong number");

    getch();
    return 0;
}

