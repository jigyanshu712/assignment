#include<stdio.h>
 #include<conio.h>
 int main()
 {
    int a,b,c;
    printf("enter the sides of the triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b+c && b<a+c && c<a+b)
        printf(" it is valid triangle");
    else
        printf("it is not a valid triangle");





getch();
return 0;

 }

