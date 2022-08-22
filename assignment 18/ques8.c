#include<stdio.h>
#include<string.h>
int countword(char[]);
int main(){
    char a[50];
    int x;
    printf("enter the string :");
    fgets(a,50,stdin);
    x=countword(a);
    printf(" the no. of words in string is %d",x);
return 0;
}


int countword(char a[]){
int i=0,count=0;
while(a[i]!='\0'){
        if((a[i]==' ') && (a[i+1]!=' '))
        count++;
        i++;

}
return(++count);

}
