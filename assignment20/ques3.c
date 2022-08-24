#include<stdio.h>
void sort(int*,int);
int main(){
     int n,i;
     printf("enter the size of the array\n");
     scanf("%d",&n);
     int a[n];
     printf("enter the elements of the array\n");
     for(i=0;i<n;i++){
        scanf("%d",&a[i]);
     }
     sort(a,n);
     printf("\n\n");
     printf("after sorting the elements\n");
     for(i=0;i<n;i++){
        printf("%d\n",a[i]);
     }
return 0;
}

void sort(int*p,int n){

int i,j;
int* temp;
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
            if(p[i]>p[j]){
                    temp=p[i];
                    p[i]=p[j];
                    p[j]=temp;


            }

    }
}
}
