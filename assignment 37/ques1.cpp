#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec{10,20,30};
    vec.push_back(40);
    for(int x:vec){
        cout<<x<<" ";
    }
return 0;
}
