#include<iostream>
using namespace std;
class array{
private:
    int a[10];
    int size=0;
public:
    void insert(int index,int value){
        a[index]=value;
        size++;
        }
        int get(int index){
            return a[index];
        }
        int get_size(){
        return size;}

        int search(int value){
            for(int i=0;i<size;i++){
                if(a[i]==value)
                    return i;

            }
            return -1;
        }
        int deletea(int index){
            if(index>=size && index<0)
                return -1;
                for(int i=index;i<size-1;i++){
                    a[i]=a[i+1];
                }
                a[size-1]=0;
                size--;


        }

        void print_array(){
            for(int i=0;i<size;i++){
                cout<<a[i]<<endl;
            }
        }
        void reverse_array(){
            int temp;
           for(int i=0,j=size-1;i<(size/2);i++,j--){
                temp=a[i];
           a[i]=a[j];
           a[j]=temp;

           }
           cout<<endl<<endl;


        }
        void sort_array(){
            int temp;
            for(int i=0;i<size;i++){
                for(int j=i+1;j<size;j++){
                    if(a[i]>a[j]){
                            temp=a[i];
                            a[i]=a[j];
                            a[j]=temp;


                    }
                }
            }
        }

};
int main(){
    int n,x;
    array a;
    cout<<"enter a number"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        a.insert(i,x);
    }
    cout<<endl;

for(int  i=0;i<a.get_size();i++){
    cout<<a.get(i)<<endl;
}
int value;
cout<<"enter  element  u want to search"<<endl;
cin>>value;
int index=a.search(value);
if(index!=-1){
    cout<<"element found at "<<index<<endl;
}
else{
    cout<<"element not found"<<endl;
}
a.reverse_array();
a.print_array();
a.sort_array();
a.print_array();

return 0;
}

