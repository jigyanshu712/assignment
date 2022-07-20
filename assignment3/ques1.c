#include<stdio.h>
#include<conio.h>
int main()
{int x;

    printf("enter the number\n");
    scanf("%d",&x);
    if(x<=0)
        printf("non-positive number");
    else
        printf("positive number");
    getch();
    return 0;
}
