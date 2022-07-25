#include<stdio.h>
int co(int);
int main(){
    int n,s;
    printf("enter the natural number\n");
    scanf("%d",&n);
    s= co(n);
    printf("the digit is %d",s);
    return 0;

}


int co(int n){
    static count,r;
   if(n){
     r=n%10;
    count++;
    co(n/10);

   }
   return(count);



}
