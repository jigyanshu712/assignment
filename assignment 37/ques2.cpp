#include<iostream>
#include<vector>
using  namespace std;
int main(){
     vector<int> v;
     v.push_back(10);
     v.push_back(20);
     v.push_back(30);
     v.push_back(40);
     v.push_back(50);
     for(auto x:v){
        cout<<x<<" ";
     }
     return 0;
}
