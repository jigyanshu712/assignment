#include<stdio.h>
int main(){
    char a[20];
    int count=0,i=0;
    printf("enter your good name\n");
    fgets(a,20,stdin);
    while(a[i]!='\0'){
        if(a[i]=='a'|| a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
            count++;
        i++;
    }
     printf(" no. of vowel  of your name is %d",count);

return 0;
}
