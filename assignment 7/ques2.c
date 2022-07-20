#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a=-1,b=1,i,c;
    printf("enter the number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;

    }



    getch();
    return 0;
}

