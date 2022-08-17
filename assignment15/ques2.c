#include<stdio.h>
int arr(int[],int);
int main(){
    int n,i;
    printf("enter the size of the array");
    scanf("%d",&n);
    int a[n],s;
    printf("enter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    s=arr(a,n);
    printf("the smallest no. is %d",s);

return 0;
}

int arr(int a[],int n){
    int min=a[0],i,temp;
    for(i=1;i<n;i++){
        if(a[i]<min){
            temp=min;
            min=a[i];
            a[i]=temp;

        }
    }
    return min;



}

