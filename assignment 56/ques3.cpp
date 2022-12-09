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

    void show_data(){
        node *temp= head;
        if(head==NULL){
            return ;
        }
        while(temp!=NULL){
            cout<<temp->value<<" ";
            temp=temp->next;

        }
        cout<<endl<<endl;
    }

       void swap_data(){


       node *temp=head;
       while(temp!=NULL && temp->next!=NULL){
        swap(temp->value,temp->next->value);
        temp=temp->next->next;
       }




       }


};
int main(){
    linkedlist l1;
    l1.insert_at_end(1);
    l1.insert_at_end(2);
    l1.insert_at_end(3);
    l1.insert_at_end(4);
    l1.insert_at_end(5);

    l1.show_data();
    l1.swap_data();
    l1.show_data();




    return 0;

}


