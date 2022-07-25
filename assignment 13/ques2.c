#include<stdio.h>
int sum(int);
int main(){
    int n,s;
    printf("enter the number\n");
    scanf("%d",&n);
    s=sum(n);
    printf("the sum of %d natural number is %d",n,s);
    return 0;
}


int sum(int n){
    static s;
    if(n>=1){
        return((2*n-1)+sum(n-1));
        return(s);
    }
    else
        return;



}
