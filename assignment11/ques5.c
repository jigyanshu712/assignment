#include<stdio.h>
#include<conio.h>
 int prime(int);
int main(){
    int n,s;
    printf("enter the number\n");
    scanf("%d",&n);
    prime(n);

    getch();
    return 0;
}

 int prime(int n){
     int i,x=2;

     while(n){
        for(i=2;i<x;i++){
            if(x%i==0)
                break;
        }
        if(i==x){
            printf("%d\n",x);
            n--;
        }
        x++;
     }

 }

