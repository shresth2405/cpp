#include <iostream>
using namespace std;

class A{
    int a;
    public:
        void setdata(int a){
            this->a=a;  //this is a keyword which is a pointer which points to the object which invokes the member function
        }
        void getdata(){
            cout<<"The value is "<<a<<endl;
        }
};

int main(){
    cout<<"Hello World"<<endl;
    A a,b;
    a.setdata(4);
    a.getdata();
    b.setdata(54);
    b.getdata();
    
    return 0;
}