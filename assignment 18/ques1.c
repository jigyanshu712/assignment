#include<stdio.h>
 int len(char[]);
int main(){
char a[50];
int x;
printf("enter the string");
fgets(a,50,stdin);
x=len(a);
printf("the length of the string is %d",x-1);
return 0;
}

int len(char a[]){
    int i;
for(i=0;a[i];i++);
return i;
}
