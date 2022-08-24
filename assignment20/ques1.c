#include<stdio.h>
void swap(int*,int*);
int main(){
    int a,b;
printf("enter the two values\n");
scanf("%d%d",&a,&b);
printf("before swaping\n");
printf("a=%d  b=%d\n",a,b);
swap(&a,&b);
printf("after swaping\n");
printf("a=%d b=%d",a,b);
return 0;}

void swap(int*p,int*q){
*p=*p+*q;
*q=*p-*q;
*p=*p-*q;
}
