#include<stdio.h>
#include<string.h>
int main(){
    char a[10][30];
    int i;
     printf("enter the emails\n");
     for(i=0;i<3;i++){
        gets(a[i]);
     }
     printf("valid emails is :");
     for(i=0;i<3;i++){
        if(strchr(a[i],'@')!=0){
            printf("%s\n",a[i]);
        }
     }

return 0;
}
