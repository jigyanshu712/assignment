#include<stdio.h>
#include<string.h>
int main(){
    char a[50];
    char*p;
    int vcount=0,ccount=0;
    printf("enter the string\n");
    gets(a);
    p=a;
    while(*p!='\0'){
        if(*p=='a'|| *p=='e'|| *p=='i'||*p=='o'||*p=='u'||*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
            vcount++;
        else
            ccount++;
        p++;
    }
    printf("the no. of vowel in this string : %d\n",vcount);
    printf("the no. of vowel in this string : %d\n",ccount);


return 0;
}
