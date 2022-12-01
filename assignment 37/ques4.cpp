#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v1{1,2,3,4,5};
    vector<int>v2;
    v2.assign(v1.begin(),v1.end());
    for(int x :v2)
        cout<<x<<" ";
return 0;
}
