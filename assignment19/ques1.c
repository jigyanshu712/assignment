#include<stdio.h>
#include<string.h>
int main(){
    char a[10][30];
    int i,j,vowel=0;
    printf("enter 5 cities name :");
    for(i=0;i<5;i++){
       gets(a[i]);
        }
        for(i=0;i<5;i++){
            vowel=0;
            for(j=0;a[i][j]!='\0';j++){
                if(a[i][j]=='a'||a[i][j]=='e'|| a[i][j]=='i'||a[i][j]=='o'||a[i][j]=='u' )
                    vowel++;
            }
            printf("%s =%d\n",a[i],vowel);

        }
return 0;
}
