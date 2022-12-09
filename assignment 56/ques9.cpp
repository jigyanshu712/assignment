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
     void palindrome(){
         node *temp=head;
         int i=0;

         while(temp!=NULL){
                i=i*10+temp->value;
         temp=temp->next;

         }
         int n=i;
         int sum=0;
         while(i!=0){
                int rem=i%10;
                sum=sum*10+rem;
                i=i/10;
         }
         if(sum==n)
            cout<<"this linked list is a palindrome"<<endl;
         else
            cout<<"this list is not a palindrome "<<endl;
     }


};
int main(){
    linkedlist l1;
    l1.insert_at_end(1);
    l1.insert_at_end(2);
    l1.insert_at_end(3);
    l1.show_data();
    l1.palindrome();



    return 0;

}



