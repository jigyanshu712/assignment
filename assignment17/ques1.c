#include<stdio.h>
int main(){
     char str[20];
     int i;
     printf("enter the name of the city\n");
     fgets(str,20,stdin);
     for(i=0;str[i];i++);
     printf("the length of the given city is %d",i-1);
return 0;
}
