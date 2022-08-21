#include<iostream>
int main(){
    using namespace std;
   int a[10],sum=0,i;
   printf("enter the 10 numbers\n");
   for(i=0;i<10;i++){
    cin>>a[i];
   }
   for(i=0;i<10;i++){
    sum=sum+a[i];
   }
  cout<<"sum of 10 numbers is "<<sum;


return 0;
}



