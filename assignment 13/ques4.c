#include<stdio.h>
int square(int);
int main(){
    int n,s;
    printf("enter the number\n");
    scanf("%d",&n);
    s=square(n);
    printf("the sum of %d natural number is %d",n,s);
    return 0;
}


int square(int n){
    static s;
    if(n>=1){
        return(n*n+square(n-1));
    }
    else
        return;



}

