#include<stdio.h>
#include<conio.h>
int main(){
    int n,s;
    printf("enter the number\n");
    scanf("%d",&n);
    s=nextprime(n);
    printf("the next prime no. is %d",s);
    getch();
    return 0;
}
 int nextprime(int n){
     int i,j;
     for(i=n+1;i>=1;i++){
            for(j=2;j<i;j++){
                if(i%j==0)
                    break;
            }
            if(i==j)
            {

            return(i);
            }

     }



 }
