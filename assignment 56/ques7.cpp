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

void node_from_end( int n){
    if(head==NULL)
        return;
    node *temp=head;
   int count=0;
   while(temp!=NULL)
   {
       count++;
       temp=temp->next;
   }
   temp=head;
   for(int i=1;i<count-n+1;i++){
    temp=temp->next;
   }
   cout<<temp->value;

}

};
int main(){
    linkedlist l1;
    l1.insert_at_end(1);
    l1.insert_at_end(2);
    l1.insert_at_end(3);
    l1.insert_at_end(4);
    l1.insert_at_end(5);
    l1.insert_at_end(6);
    l1.insert_at_end(77);
    l1.node_from_end(1);
    return 0;
}

