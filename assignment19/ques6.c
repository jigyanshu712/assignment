#include<stdio.h>
#include<string.h>
int main(){
    char a[10][50];
    int i,j,k,flag=1;
    printf("enter the three strings \n");
    for(i=0;i<3;i++){
        gets(a[i]);
    }
    printf(" the palindrome  string is:");
    for(i=0;i<3;i++){
            flag=1;
            j=0;
            k=strlen(a[i])-1;
            while(j<=k){
                if(a[i][j]!=a[i][k]){
                     flag=0;
                     break;
                }
                j++;
                k--;
            }
            if(flag){
                printf("%s\n",a[i]);


            }


    }
return 0;
}
