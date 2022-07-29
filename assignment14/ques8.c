#include<stdio.h>
int main(){
    int a[10],i,temp,j;
    printf("enter the 10 elements\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
   for(i=0;i<2;i++)
   {
       for(j=i+1;j<10;j++){
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
       }
   }
   printf("the second smallest element is %d",a[1]);
  return 0;
}

