#include<iostream>
using namespace std;
 class fact{

 public :
     void facto(int n){
         int f=1,i;
         if(n==0 && n==1){
            f=1;
         }
         else{
            for(i=2;i<=n;i++){
                f=f*i;
            }
         }
         cout<<"factorial of "<<n<<" is "<<f;


     }

 };
int main(){
    int n;
    fact f1;
    cout<<"enter a number : ";
    cin>>n;
    f1.facto(n);

return 0;
}

