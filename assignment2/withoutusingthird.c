#include<stdio.h>
#include<conio.h>
int main()
{ int a,b;
printf("enter the number\n");
scanf("%d%d",&a,&b);
printf("a=%d b=%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("after swapping the number\n");
printf("a=%d b=%d",a,b);


    getch();
    return 0;
}
