#include<stdio.h>
int alphanumeric(char[]);
int main(){
    char str[50];
    int x;
    printf("enter the string \n");
    scanf("%s",str);
    x=alphanumeric(str);
    if(x)
        printf("it is an alphanumeric string");
    else
        printf("it is not an alphanumeric string");
return 0;
}

int alphanumeric(char a[]){
int i=0,alpha=0,num=0;

while(a[i]!='\0'){
        if((a[i]>='a' && a[i]<='z')|| (a[i]>='A' && a[i]<='Z'))
            alpha++;
        if(a[i]>='0' && a[i]<='9')
            num++;

        i++;

}
if(alpha && num)
    return 1;
return 0;



}





