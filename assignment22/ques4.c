#include<stdio.h>
int main(){
    int n;
    char *ptr;
    printf("enter the limit of the text\n");
    scanf("%d",&n);
    ptr=(char *)malloc(n*sizeof(char));
    if(ptr==NULL)
    {
        printf("memory allocation failed\n");
        return 0;
    }
    printf("enter the string:\n");
    fflush(stdin);
    gets(ptr);
    printf("%s",ptr);
    free(ptr);
return 0;}
