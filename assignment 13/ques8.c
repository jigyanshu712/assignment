#include<stdio.h>
int fib(int);
int main(){
int n,i;
printf("enter the number\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
    printf("%d\n",fib(i));
}
return 0;
}


int fib(int n){
    if(n==1 ||n==2)
        return 1;
    return(fib(n-2)+fib(n-1));
}
