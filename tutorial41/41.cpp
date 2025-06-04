#include <iostream>
using namespace std;

class Base1{
    protected :
        int baseint1;
    public:
        void set_base_int1(int a){
            baseint1=a;
        }
};
class Base2{
    protected :
        int baseint2;
    public:
        void set_base_int2(int a){
            baseint2=a;
        }
};


class Derived: public Base1, public Base2{
    public:
        void show(){
            cout<<"The value of base 1 is "<<baseint1<<endl;
            cout<<"The value of base 2 is "<<baseint2<<endl;
        }
};


int main(){
    cout<<"Hello World"<<endl;
    Derived der;
    der.set_base_int1(2);
    der.set_base_int2(2);
    der.show();
    
    return 0;
}