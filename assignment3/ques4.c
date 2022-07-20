#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("enter the number\n");
    scanf("%d",&x);
    if(2*(x/2)==x)
        printf("even number");
    else
        printf("odd number");

    getch();
    return 0;
}

