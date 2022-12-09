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
          node *temp=head;
          if(head==NULL)
            return;
          while(temp!=NULL){
            cout<<temp->value<<" ";
            temp=temp->next;
          }
          cout<<endl<<endl;

      }


      void move_data(){
        node *temp=head;
        node *prev;
        while(temp->next!=NULL){
            prev=temp;
             temp=temp->next;

        }
        prev->next=NULL;
        temp->next=head;
        head=temp;

      }



};
int main(){
    linkedlist l1;
    l1.insert_at_end(3);
    l1.insert_at_end(8);
    l1.insert_at_end(1);
    l1.insert_at_end(5);
    l1.insert_at_end(7);
    l1.insert_at_end(12);
    l1.show_data();
    l1.move_data();
    l1.show_data();



    return 0;

}

