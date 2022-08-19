#include<stdio.h>
 int main(){
     char a[50],t;
     int i,j;
     printf("enter your good name\n");
     fgets(a,50,stdin);
     for(i=0;a[i];i++){
        for(j=i+1;a[j];j++){
            if(a[i]>a[j]){
                    t=a[i];
            a[i]=a[j];
            a[j]=t;

            }
        }
     }
     printf("the sorting string is:\n");
     printf("%s",a);
 return 0;
 }
