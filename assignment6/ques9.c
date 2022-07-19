#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,i;
    printf("enter the two number\n");
    scanf("%d%d",&a,&b);
    for(i=a>b?a:b;i<=a*b;i=i+(a>b?a:b)){
        if(i%a==0 &&i%b==0)
            break;
    }
    printf("the lcm  is %d",i);
    getch();
    return 0;

}
