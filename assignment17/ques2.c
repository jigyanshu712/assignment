#include<stdio.h>
#include<string.h>
int main(){
    char a[]="hello";
    char b='l';
    int i=0,count=0;

    while(a[i]!='\0'){
            if(a[i]==b)
            count++;
            i++;

    }
   printf("the occurace of %c in %d times",b,count);

    return 0;
}
