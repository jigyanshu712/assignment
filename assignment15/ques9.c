#include<stdio.h>
void merge(int[],int[],int);
int main(){
     int n,i;
     printf(" enter the size of the array\n");
     scanf("%d",&n);
     int a[n],b[n];
     printf("enter the elements of the first array\n");
     for(i=0;i<n;i++){
        scanf("%d",&a[i]);
     }
      printf("enter the elements of the second array\n");
     for(i=0;i<n;i++){
        scanf("%d",&b[i]);
     }
        merge(a,b,n);

return 0;

}


void merge(int a[],int b[],int n){
int i=0,j=0,k=0,c[2*n];
printf("the sorted array is :\n");
for(k=0;k<2*n;k++){
    if(a[i]>b[j]){
        c[k]=b[j];
        j++;
    }
    else{
        c[k]=a[i];
        i++;
    }


}
for(k=0;k<2*n;k++){
    printf("%d\n",c[k]);
}
}





