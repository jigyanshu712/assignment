#include<bits/stdc++.h>
using namespace std;
int  main(){
    list<int> flist={1,2,3,4,5,6,7,8,9,10};
    list<int>::iterator it;
    flist.remove(4);
    // after removing the  4 element in the list
    for(it=flist.begin();it!=flist.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    flist.remove_if([](int n){ return (n%2!=0);});
    cout<<" list after removing all the odd number : "<<endl;
    for(it=flist.begin();it!=flist.end();it++){
        cout<<*it<<" ";
    }
return 0;
}

