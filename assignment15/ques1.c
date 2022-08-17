#include<stdio.h>
int arr(int[],int);
int main(){
    int n,i;
    printf("enter the size of the array");
    scanf("%d",&n);
    int a[n],g;
    printf("enter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    g=arr(a,n);
    printf("the greatest no. is %d",g);

return 0;
}

int arr(int a[],int n){
    int max=a[0],i,temp;
    for(i=1;i<n;i++){
        if(a[i]>max){
            temp=max;
            max=a[i];
            a[i]=temp;

        }
    }
    return max;



}
