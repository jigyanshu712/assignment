#include<stdio.h>
void lower(char[]);
int main(){
    int str[20];
    printf("enter the string in capital letter :");
    scanf("%s",str);
    lower(str);
return 0;
}

void lower(char a[]){
    int i=0;
while(a[i]){
    a[i]=a[i]+32;
    i++;
}
printf("string in lowercase:");
printf("%s",a);

}


