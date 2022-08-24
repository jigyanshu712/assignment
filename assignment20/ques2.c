#include<stdio.h>
#include<string.h>
int main(){
char a[50],b[50];
printf("enter the strings :\n");
gets(a);
gets(b);
printf("after swapping\n");
swap(a,b);
printf("%s %s",a,b);
return 0;
}

void swap(char*a,char*b){
    char *temp;
    temp=a;
    a=b;
    b=temp;
}
