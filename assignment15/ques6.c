#include<stdio.h>
void reverse(int[],int);
int main(){
    int n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int a[n],i;
    printf("enter the element of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    reverse(a,n);
return 0;
}

void reverse(int a[],int n){
int i;
printf("the reverse array is :\n");
for(i=n-1;i>=0;i--){
    printf("%d\n",a[i]);
}
}
