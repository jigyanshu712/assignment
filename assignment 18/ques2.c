#include<stdio.h>
#include<string.h>
void rev(char[],int,int);
int main(){
    int a[50],i=0,j;
    printf("enter the string ");
    fgets(a,50,stdin);
    j=strlen(a)-1;
    rev(a,i,j);
return 0;
}

void rev(char a[],int i,int j)
{

    char temp;

    while(i<=j){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;


    }
    printf("the reverse string is:");
    printf("%s",a);
}
