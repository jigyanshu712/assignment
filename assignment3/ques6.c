#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("enter the  two number\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf(" %d is greater",a);

    }
    else {
        if(a==b)
        printf("both are same ");
        else
        {

            printf("%d is greater",b);
        }
    }
    getch();
    return 0;
}

