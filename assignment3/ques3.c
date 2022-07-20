#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("enter the number\n");
    scanf("%d",&x);
    if(x%2)
        printf("odd number");
    else
        printf("even number");

    getch();
    return 0;
}

