#include<bits/stdc++.h>
using namespace std;
class node{
 public:
     int value;
     node* next;
      node(){
          value=0;
          next=NULL;
      }

     };
class linkedlist{
public:
    node* head;
    linkedlist(){
        head=NULL;
    }
    void insert_at_end(int v){
         node* temp=new node();
         temp->value=v;
         if(head==NULL)
         {
             head=temp;
         }
         else{
            node *t=head;
            while(t->next!=NULL)
                t=t->next;
            t->next=temp;
         }
    }
     void search( int v){
        node *t=head;
        if(head==NULL){
            cout<<"linked list is empty ";
            return ;
        }
        while(t!=NULL){
            if(t->value==v){
                cout<<v<<" is present";
                return;
            }
            t=t->next;
        }
        cout<<v<<" is not present"<<endl;

    }


};
int main(){
    linkedlist l1;
    l1.insert_at_end(1);
    l1.insert_at_end(2);
    l1.insert_at_end(3);
    l1.insert_at_end(4);
    l1.insert_at_end(5);
    l1.search(5);


    return 0;

}

