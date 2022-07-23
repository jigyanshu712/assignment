#include<stdio.h>

int digit(int,int);

int main(){

int n,d,r;
printf("enter the range and number\n");
scanf("%d%d",&n,&d);
r= digit(n,d);
if(r)
    printf("the digit is present");
else
    printf("the digit is not present");

return 0;

}
int digit(int n,int d){
    int i,x;

    for(i=1;i<=n;i++){
            x=i;
        while(x>0){
            if(x%10==d){
                return 1;}
            x=x/10;
        }
    }

    return 0;

}


