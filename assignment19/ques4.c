#include<stdio.h>
#include<string.h>
int main(){
    char a[5][20];
    int i,j;
    printf("enter the string:\n");
    for(i=0;i<5;i++){
        gets(a[i]);
    }
    for(i=0;i<5;i++){
        if(strcmp(a[i],"jigyanshu")==0)
        {

            printf("string found");
            break;
        }
        else
        {
            printf("string is not found");
            break;
        }
    }

return 0;
}
