#include<stdio.h>
#include<string.h>
int main(){
     int i,flag=0;
     char a[3][2][20]=
     {
         {
             "jigyanshu","712"
         },
         {
          "vaibhav","786"
         },
         {
             "manish","213"
         }

     };
     char username[]="jigyanshu";
     char password[]="712";


     for(i=0;i<3;i++){
        if(strcmp(username,a[i][0])==0  && strcmp(password,a[i][1])==0)
        {

            printf("login successful!");
            flag=1;
        }
     }
     if(flag==0)
        printf("login unsuccessful");


return 0;
}
