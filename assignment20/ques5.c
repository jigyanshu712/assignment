#include<stdio.h>
int main(){
    int a,b,*c=&a,*d=&b;
    printf("enter the two numbers:\n");
    scanf("%d",c);
    scanf("%d",d);
    if(*c>*d)
        printf("%d is maximum",*c);
    else
    if(*c<*d)
        printf("%d is maximum",*d);
    else
        printf("both are same");

return 0;
}
