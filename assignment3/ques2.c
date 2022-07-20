#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("enter the number\n");
    scanf("%d",&x);
    if(x%5)
        printf("it is not divisible by 5");
    else
        printf("it is divisible by 5");

    getch();
    return 0;
}
