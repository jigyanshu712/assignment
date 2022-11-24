#include<iostream>
using namespace std;
 class dynamic_array{
 private:
    int *array;
    int capacity;
    int size;
 public:
     int get_size(){
     return size;
     }
     int get_capacity(){
     return capacity;
     }
    dynamic_array(){
        array=new int[1];
        size=0;
        capacity=1;
    }
    ~dynamic_array(){
        delete []array;
        size=0;
        capacity=0;
    }
    void insert_by_shift(int index,int value){
        if(size==capacity){
            resize();
        }
        if(index>=capacity){
            cout<<"memory not exist "<<endl;
            return;
        }
       for(int i=size;i>=index;i--){
        array[i]=array[i-1];
       }
       array[index]=value;
       size++;
    }
    void insert(int index,int value){
        if(size==capacity){
            resize();
        }
        if(index>=capacity){
            cout<<"memory not exist "<<endl;
            return;
        }
        array[index]=value;
        size++;
    }
    void resize(){
        int *temp= new int[2*capacity];
        for(int i=0;i<size;i++){
            temp[i]=array[i];
        }
        delete []array;
        array=temp;
        capacity=2*capacity;
    }
    void print_array(){
        for(int i=0;i<size;i++){
            cout<<array[i]<<" ";
        }
        cout<<endl;
       cout<<"size = "<<size<<" capacity = "<<capacity<<endl;

    }
    void deletea(int index){
        if(index>=size){
            cout<<"memory not exist"<<endl;
            return;
        }
        for(int i=index;i<size-1;i++){
            array[i]=array[i+1];
        }
        size--;
    }

    void shrink_to_fit(){
        int *temp=new int[size];
        for(int i=0;i<size;i++){
            temp[i]=array[i];
        }
        delete[]array;
        array=temp;
        capacity=size;
    }
    int search( int value){
        for(int i=0;i<size;i++){
            if(array[i]==value){
                return 1;
            }

        }
        return -1;
    }
    void reverse_array(){
        for(int i=0,j=size-1;i<(size/2);i++,j--){
            int temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
    }
     void sort_array(){
         for(int i=0;i<size;i++){
            for( int j=i+1;j<size;j++){
                if(array[i]>array[j]){
                    int temp=array[i];
                    array[i]=array[j];
                    array[j]=temp;
                }
            }
         }
     }
 };

int main(){
    dynamic_array a;
    a.insert(0,10);
    a.print_array();
    a.insert(1,20);
    a.print_array();
    a.insert(2,30);
    a.print_array();
    a.insert(3,40);
    a.print_array();
    a.insert(4,50);
    a.print_array();
    a.insert_by_shift(2,100);
    a.print_array();
    a.deletea(2);
    a.shrink_to_fit();
    a.print_array();
    if(a.search(60)!=-1){
        cout<<"element exist"<<endl;
    }
    else
    {
        cout<<"element not exist"<<endl;
    }
    a.reverse_array();
    a.print_array();
    a.sort_array();
    a.print_array();

    return 0;

}
