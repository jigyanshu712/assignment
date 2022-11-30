#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    int sum=0;
    forward_list<int> flist={1,2,3,4,5,6,7,8,9,10};
    forward_list<int>:: iterator ptr;
    for( ptr=flist.begin();ptr!=flist.end();ptr++){
        sum=sum+(*ptr);
    }
    cout<<"the sum of   1 to 10 elements is "<<sum;

return 0;
}
