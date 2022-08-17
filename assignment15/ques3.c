#include<stdio.h>
 void bubble_sort(int[],int);
 void swap(int*,int*);
int main(){
    int n,i;
    printf(" enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    bubble_sort(a,n);
    printf("the sorted array is:\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }

return 0;
}

 void bubble_sort(int a[],int n){
     int i,j;
     for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
            }
        }
     }
 }

 void swap(int *x,int *y){
     int temp;
     temp=*x;
     *x=*y;
     *y=temp;
 }
