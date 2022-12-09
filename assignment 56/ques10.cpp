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
    void sort_data(){
        node *end,*p,*q;
        if(head==NULL)
           return;
           cout<<"sorted element as follows :"<<endl;
           for(end=NULL;end!=head->next;end=q){
            for(p=head;p->next!=end;p=p->next){
                q=p->next;
                if(p->value>q->value){
                    int temp=p->value;
                    p->value=q->value;
                    q->value=temp;
                }
            }
           }


    }







    void remove_duplicate(){
        node *t=head;
        if(head==NULL)
            return ;
        while(t->next!=NULL){
                if(t->value==t->next->value){
                        node *d=t->next;
                t->next=t->next->next;
                free(d);

                }
                else{
                    t=t->next;
                }

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

    void find_middle_element(){
        node *temp=head;
        int count=0;
        if(head==NULL)
            return;
            while(temp!=NULL){
                count++;
                temp=temp->next;
            }
            int mid=count /2 ;
            temp=head;
            for(int i=1;i<=mid;i++){
                    temp=temp->next;

            }
            cout<<" middle value is "<<temp->value<<endl;

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
    l1.find_middle_element();



    return 0;

}


