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
node*temp=head;
while(temp!=NULL){
    cout<<temp->value<<" ";
    temp=temp->next;
}
cout<<endl;
}

void occurence(int key){
    node*temp=head;
    int count=0;
    while(temp!=NULL){
        if(key==temp->value){
            count++;
        }
        temp=temp->next;
    }
    if(count!=0)
        cout<<key<<"has occured "<<count<<"times"<<endl;
    else
        cout<<"value is not found"<<endl;
}

};
int main(){
    linkedlist l1;
    l1.insert_at_end(1);
    l1.insert_at_end(2);
    l1.insert_at_end(1);
    l1.insert_at_end(2);
    l1.insert_at_end(1);
    l1.insert_at_end(3);
    l1.insert_at_end(1);
    l1.occurence(6);
    return 0;
}
