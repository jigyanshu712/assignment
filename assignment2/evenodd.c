#include<stdio.h>
#include<conio.h>
int main(){
    int n,result;
    printf("enter the number\n");
    scanf("%d",&n);
    result=n&1;
    if(result==0)
        printf("the number is even");
    else
        printf("the number is odd");

 getch();
 return 0;}

