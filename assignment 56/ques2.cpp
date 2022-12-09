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


};
int main(){
    linkedlist l1;
    l1.insert_at_end(60);
    l1.insert_at_end(43);
    l1.insert_at_end(43);
    l1.insert_at_end(21);
    l1.insert_at_end(11);
    l1.insert_at_end(11);
    l1.insert_at_end(11);
    l1.show_data();
    l1.sort_data();
    l1.show_data();
    l1.remove_duplicate();
    l1.show_data();



    return 0;

}


