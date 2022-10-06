#include<iostream>
#include<math.h>
using namespace std;
class matrix{
private:
    int a[3][3];
public:
    void input(){
        cout<<" enter matrix element(3 X 3) :"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>a[i][j];
            }
        }
    }
    void display(){
        cout<<" matrix  is "<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
  void operator -(){
             for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                a[i][j]=-a[i][j];

            }

        }
  }

};
int main(){
 matrix m1;
 m1.input();
 m1.display();
 -m1;
 m1.display();
return 0;
}
