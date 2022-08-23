#include<stdio.h>
#include<string.h>
int main(){
     char ip[]="214.13.0.8";
     char *a=strtok(ip,".");
     while(a!=NULL){
            int x=atoi(a);
    if((x>=0) &&(x<=255))
     printf("%d ",x);
     a=strtok(NULL,".");

     }

return 0;
}
