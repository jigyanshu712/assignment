#include <iostream>
using namespace std;
class test {
    int objNo;
    static int objCnt;

public:
    test()
    {
    objNo = ++objCnt;
    }
    ~test()
    {
    --objCnt;
    }
    void printObjNumber()
    {
        cout << "object number :" << objNo << "\n";
    }
    static void printObjCount()
    {
        cout << "count:" << objCnt<< "\n";
    }
};
int test::objCnt;
int main()
{
    test t1, t2;
    test::printObjCount();

    test t3;
    test::printObjCount();

    t1.printObjNumber();
    t2.printObjNumber();
    t3.printObjNumber();
    return 0;
}
