#include<stdio.h>
#include<string.h>
 int main(){
     char a[20];
     int i=0;
     printf("enter your good name\n");
     fgets(a,20,stdin);
     while(a[i]!='\0'){
            if(a[i]>='a' && a[i]<='z')
        a[i]=a[i]-32;
        i++;
     }
      printf("name in uppercase letter is:");

   printf("%s",a);

 return 0;
 }
