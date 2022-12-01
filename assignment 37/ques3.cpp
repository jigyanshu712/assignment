#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<" enter the number of element which you want to enter : ";
    cin>>n;
    int a;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    for(int x :v){
        cout<<x<<" ";
    }
return 0;
}
