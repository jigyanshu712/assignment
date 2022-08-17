#include<stdio.h>
int main(){
int n,i,d,temp,j;
printf("enter the size of the array\n");
scanf("%d",&n);
printf("enter the no. of position rotate to the array\n");
scanf("%d",&d);
int a[n];
printf("enter the elements of the arrays\n");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
while(d!=0){
        temp=a[0];
        for(i=0;i<n-1;i++){
            a[i]=a[i+1];

        }
        a[n-1]=temp;
        d--;
}
 printf("\n the rotated array is :\n");
 for(i=0;i<n;i++){
    printf("%d\n",a[i]);
 }


return 0;

}
