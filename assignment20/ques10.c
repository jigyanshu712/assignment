#include<stdio.h>
#include<string.h>
void reverse(char * ,int);
int main(){
    int i;
    char a[20];
    printf("enter the string: ");
    gets(a);
    reverse(a,20);
    printf("the reverse string is:\n");
    printf("%s",a);
return 0;
}

void reverse(char* str,int n){
    int* temp;
int i=0,j=strlen(str)-1;
while(i<=j){
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    i++;
    j--;
}


}
