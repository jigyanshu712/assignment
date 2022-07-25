#include<stdio.h>
void display(int);
int main(){
int n;
printf("enter the number\n");
scanf("%d",&n);
display(n);
return 0;
}
void display(int n){
    if(n){
        display(n-1);
    }
    else
        return;
    printf("%d\n",2*n-1);




}

