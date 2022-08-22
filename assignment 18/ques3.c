#include<stdio.h>
int compare(char[],char[]);
int main(){
    char str1[20],str2[20];
    printf("enter the first string :");
    scanf("%s",str1);
    printf("enter the second string:");
    scanf("%s",str2);
    int c=compare(str1,str2);
    if(c==0)
        printf("strings are same");
    else
        printf("strings are not same");
return 0;
}
  int compare(char a[],char b[]){
      int i=0;
      while(a[i]!='\0' && b[i]!='\0'){
        if(a[i]!=b[i]){

            return 1;
        }
        i++;
      }
      return 0;



  }
