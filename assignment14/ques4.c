#include<stdio.h>
int main(){
int a[10],i,max=0;
printf("enter the number\n");
for(i=0;i<10;i++){
    scanf("%d",&a[i]);
    if(a[i]>max)
        max=a[i];

}
printf("the  maximum number is %d",max);

return 0;}

