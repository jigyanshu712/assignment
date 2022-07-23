#include<stdio.h>
#include<conio.h>
int sum(int);
int main(){
int n,s;
printf("enter the number\n");
scanf("%d",&n);
s=sum(n);
printf("the  sum of %d number is %d",n,s);
getch();
return 0;
}
int sum(int n){

int i,sum=0;
for(i=1;i<=n;i++)
    {

        sum=sum+i;
    }
    return(sum);
}
