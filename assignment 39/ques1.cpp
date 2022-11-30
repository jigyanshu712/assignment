#include<forward_list>
#include<iostream>
using namespace std;
int main(){
    forward_list<int> first_1;
    forward_list<int>first_2;
    forward_list<int>first_3;
    first_1.assign({1,2,3});
    // Assigning repeating values using assign()
    // 5 elements with value 10
    first_2.assign(5,10);
     //Assigning values of list 1 to list 3
    first_3.assign(first_1.begin(),first_2.end());
    cout<<"the element of first list are : "<<endl;
    for(int &a : first_1)
        cout<<a<<" ";
        cout<<endl;
    cout<<"the element of second list are : "<<endl;
    for(int &b:first_2)
        cout<<b<<" ";
    cout<<endl;
    cout<<"the element of third list are : "<<endl;
    for(int &c:first_3)
        cout<<c<<" ";
    cout<<endl;


return 0;
}

