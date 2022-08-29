#include<iostream>
using namespace std;
int sum(int ,int ,int=0);
int main(){
    cout<<"the sum is "<<sum(2,3,2);

return 0;}


int sum(int x,int y,int z){
return(x+y+z);
}
