#include <iostream>
using namespace std;

class Base1{
    int data1;
    public:
        Base1(int i){
            data1=i;
            cout<<"The data is "<<data1<<endl;
        }
};


class Base3{
    int data3;
    public:
        Base3(int i){
            data3=i;
            cout<<"The data is "<<data3<<endl;
        }
};


class Derived:public Base1,public Base3{
    int data2;
    public:
        Derived(int a, int b,int j):Base1(a),Base3(b){
            data2=j;
            cout<<"The data is "<<data2<<endl;
        }
};

int main(){
    cout<<"Hello World"<<endl;
    Derived der(1,2,4);
    return 0;
}