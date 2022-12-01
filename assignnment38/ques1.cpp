#include<iostream>
#include<list>
#include<iterator>
using namespace std;
// function of printing the element in the list
 void show_list(list<int> g){
     list<int>:: iterator ptr;
     for(ptr=g.begin();ptr!=g.end();ptr++){
        cout<<*ptr<<" ";
     }
     cout<<endl;
 }
int main(){
    list<int>gqlist1,gqlist2;
    //inserting  10 elements
    for(int i=0;i<10;i++){
        gqlist1.push_back(2*i);
        gqlist2.push_front(3*i);
    }
    cout<<"\n list 1 (gqlist1) is : ";
    show_list(gqlist1);
    cout<<"\n list 2(gqlist2) is :";
    show_list(gqlist2);
    cout<<" list 1 first element "<<gqlist1.front()<<endl;
    cout<<" list 2 last element  "<<gqlist2.back()<<endl;
    cout<<"after pop the first element of the list 1 is  :"<<endl;
    gqlist1.pop_front();
    show_list(gqlist1);
    cout<<"after pop the last element of the list 2 is  :"<<endl;
    gqlist2.pop_back();
    show_list(gqlist2);
    cout<<"reverse the first list is :"<<endl;
    gqlist1.reverse();
    show_list(gqlist1);
    cout<<"sort the list 2 is : "<<endl;
    gqlist2.sort();
    show_list(gqlist2);



return 0;
}
