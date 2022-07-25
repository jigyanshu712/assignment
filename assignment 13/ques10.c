#include<stdio.h>
#include<math.h>
int power(int,int);
int main(){
int n,p,result;
printf("enter the  number and power\n");
scanf("%d%d",&n,&p);
result=power(n,p);
printf("%d^%d =%d",n,p,result);
return 0;
}

int power(int n,int p){
if(p==0)
    return 1;
return(n*power(n,p-1));



}
