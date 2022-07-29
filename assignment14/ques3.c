#include<stdio.h>
int main(){
int a[10],i,se=0,so=0;
printf("enter the 10 number\n");
for(i=0;i<10;i++){
    scanf("%d",&a[i]);
   if(a[i]%2)
    so=so+a[i];
   else
    se=se+a[i];
}
printf("the sum of even  numbers is %d\n",se);
printf("the sum of odd numbers is %d\n",so);


return 0;}

