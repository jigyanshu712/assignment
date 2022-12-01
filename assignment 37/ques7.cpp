#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements :";
    cin>>n;
    vector<int>v;
    int a,sum=0;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);

    }
    cout<<"sum of all elements is : "<<accumulate(v.begin(),v.end(),0);
return 0;
}
