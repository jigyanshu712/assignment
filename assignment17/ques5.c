#include<stdio.h>
#include<string.h>
 int main(){
     char a[20];
     int i=0;
     printf("enter your good name in uppercase\n");
     fgets(a,20,stdin);
     while(a[i]!='\0'){
            if(a[i]>='A' && a[i]<='Z')
        a[i]=a[i]+32;
        i++;
     }
      printf("name in lowercase letter is:");

   printf("%s",a);

 return 0;
 }

