#include<stdio.h>
#include<conio.h>
void prime(int n);
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    prime(n);
    getch();
 return 0;


 }

 void prime(int n){
     int i=2;
     if(n==1)
     {
         printf("1");
     }
     else{
 while(n!=0){
    while(n%i==0){
        printf("%d\n",i);
        n=n/i;
    }
    i++;

 }
     }


 }
