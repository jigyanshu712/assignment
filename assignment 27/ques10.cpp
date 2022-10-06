#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
class matrix{
private :
    int a[3][3];
public:
    void input(){
        cout<<"enter the matrix(3 X 3) : "<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>a[i][j];
            }
        }
    }
    void display(){
        cout<<"matrix is : "<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<a[i][j]<<"   ";
            }
            cout<<endl;
        }
    }
    matrix operator+(matrix m){
        matrix m1;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
               m1.a[i][j]=a[i][j]+m.a[i][j];
            }
        }
        return m1;
    }
};
int main(){
    matrix m1,m2,m3;
    m1.input();
    m1.display();
    m2.input();
    m2.display();
    m3=m1+m2;
    m3.display();

return 0;
}
