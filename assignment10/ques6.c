#include<stdio.h>
#include<conio.h>
int fact (int);

int main(){
int n,s;
printf("enter the number\n");
scanf("%d",&n);
s=fact(n);
printf("the factorial of %d is %d",n,s);
getch();
return 0;
}
int fact(int n){

int f=1,i;
for(i=n;i>=1;i--){
    f=f*i;

}
    return(f);
}

