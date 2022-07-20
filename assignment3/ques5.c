#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("enter the number\n");
    scanf("%d",&x);
    if(x>99 &&x<1000)
        printf("it is a three digit number");
    else
        printf("it is not a three digit number");

    getch();
    return 0;
}

