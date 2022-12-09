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
bool detectLoop(){
    node*h=head;
    unordered_set<node*> s;
    while (h != NULL) {
        // If this node is already present
        // in hashmap it means there is a cycle
        // (Because you will be encountering the
        // node for the second time).
        if (s.find(h) != s.end())
            return true;

        // If we are seeing the node for
        // the first time, insert it in hash
        s.insert(h);

        h = h->next;
    }

    return false;
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
 if(l1.detectLoop())
    cout<<"it has an loop"<<endl;
 else
    cout<<"it has no loop"<<endl;


    return 0;

}



