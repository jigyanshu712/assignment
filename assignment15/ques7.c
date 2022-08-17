#include<stdio.h>
int dup(int[],int);
int main(){
    int n,i,k;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf(" enter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    k=dup(a,n);
printf(" the total no. of duplicate element is %d",k);
return 0;
}


int dup(int a[],int n1){
int i,j,count=0;
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]==a[j])
            count ++;
    }
}
return count ;
}
