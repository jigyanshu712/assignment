#include<stdio.h>
#include<conio.h>
int main()
{ int a ,b,c;
printf(" enter the two numbers\n");
scanf("%d%d",&a,&b);
printf("a=%d b=%d\n",a,b);
c=a;
a=b;
b=c;
printf(" after swapping the number is \n");
printf("a=%d b=%d",a,b);


    getch();
    return 0;
}

