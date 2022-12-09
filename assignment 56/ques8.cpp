# include<bits/stdc++.h>
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
     void push( int n){
          node *temp= new node();
          temp->value=n;
          if(head==NULL)
          {
             head=temp;
          }
          else{
            node *t=head;
            while(t->next!=NULL)
            {
                t=t->next;
            }
            t->next=temp;
          }
     }
      void pop(){
          if(head==NULL){
            cout<<"list is empty"<<endl;
            return ;
          }
          node *temp=head;
          node *prev;
          while(temp->next!=NULL){
                prev=temp;
                temp=temp->next;
          }
          prev->next=NULL;
          free(temp);

      }


void show_data(){
node*temp=head;
while(temp!=NULL){
    cout<<temp->value<<" ";
    temp=temp->next;
}
cout<<endl;
}



};
int main(){
    linkedlist l1;
    l1.push(1);
    l1.push(2);
    l1.push(3);
    l1.push(4);
    l1.push(5);
    l1.push(6);
    l1.push(77);
    l1.show_data();
    l1.pop();
    l1.pop();
    l1.show_data();

    return 0;
}


