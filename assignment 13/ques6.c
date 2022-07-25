#include<stdio.h>
int fact(int);
int main(){
    int n,s;
    printf("enter the number\n");
    scanf("%d",&n);
    s=fact(n);
    printf("the factorial of %d  is %d",n,s);
    return 0;
}


int fact(int n){
    if(n==0||n==1)
        return 1;
return(n*fact(n-1));



}


