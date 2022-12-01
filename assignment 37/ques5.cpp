#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,0,100,5,6,7,8,9,10};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"minimum element is : "<<*min_element(v.begin(),v.end())<<endl;
    cout<<"maximum element is : "<<*max_element(v.begin(),v.end())<<endl;


return 0;
}
