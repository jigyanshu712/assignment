#include<iostream>
using namespace std;
 int fact(int);
 int combi(int,int);
 void pascal(int);


 int fact(int n){
     int f=1,i;
     if(n==0 || n==1)
        return 1;
        for(i=2;i<=n;i++){
            f=f*i;
        }
        return(f);
 }

 int combi(int n,int r){
     return(fact(n)/(fact(r)*fact(n-r)));
 }
 void pascal(int n){
     int i,j,k,p;
     for(i=1;i<=n;i++){
            p=0;
        for(j=1;j<=(2*n-1);j++){
           if((j>=n+1-i && j<=n-1+i)&&k){
                cout<<" "<< combi(i-1,p);
                p++;

                k=0;
           }
           else
           {
               cout<<"  " ;
               k=1;
           }
        }
        printf("\n");
     }
 }
int main(){
    int n;
    cout<<"enter the number of rows\n";
    cin>>n;
    pascal(n);
return 0;
}
