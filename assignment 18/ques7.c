#include<stdio.h>
#include<string.h>
 int palin(char[]);
int main(){
    char a[50];
     int x,j;
    printf("enter your name\n");
    fgets(a,50,stdin);
  x= palin(a);
  if(x)
    printf("it is a palindrome");
  else
    printf("it is not a palindrome");

return 0;
}



int palin(char a[]){
    int i=0;
    int j=strlen(a)-2;

    while(i<=j){
        if(a[i]!=a[j]){
        return 0;}
        i++;
        j--;

    }
    if(i>j)
        return 1;




}



