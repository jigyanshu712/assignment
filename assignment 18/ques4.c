#include<stdio.h>
void rev(char[]);
int main(){
    char str[20];
    printf("enter the string:");
    scanf("%s",str);
    rev(str);
return 0;
}

void rev(char a[]){
     int i=0;
    while(a[i]!='\0')
    {
        a[i]=a[i]-32;
        i++;
    }
    printf("string in uppercase: ");
printf("%s",a);

}
