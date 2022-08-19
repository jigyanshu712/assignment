#include<stdio.h>
int main(){
    char a[50],f[150]={0};
    int i=0;
    printf(" enter your good name\n");
    fgets(a,50,stdin);
     while(a[i]!='\0'){
        f[a[i]]++;
        i++;
     }
      for(i=0;i<150;i++)
      {

          if(f[i]!=0){
            printf("%c occurs in %d times\n",i,f[i]);
          }
      }

return 0;
}
