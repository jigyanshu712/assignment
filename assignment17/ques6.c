#include<stdio.h>
#include<string.h>
int main(){
    char a[20],t;
    printf("enter your good name:\a");
    fgets(a,20,stdin);
    printf("\n");
    int i=0,j=strlen(a)-1;
     while(i<=j){
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        i++;
        j--;

     }
     printf("the reverse string is :\a");
     printf("%s",a);
return 0;
}

