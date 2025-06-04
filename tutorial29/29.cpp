// constructors in cpp
#include <iostream>
using namespace std;


class Complex{
    // Constructor is a special member function with same name as class. It is used to initialize the value of the object of its class.It is automatically invoked.
    int a,b;
    public:
        Complex();
        void printdata(void){
            cout<<"Your number is "<<a<<" + "<<b<<"i";
        }
};

Complex:: Complex(void){
    a=1;
    b=2; 
}

int main(){
    cout<<"Hello World"<<endl;
    Complex c;
    c.printdata();
    
    return 0;
}

/*
Characteristics of constructors:

1. It should be declared in the public section of the class.
2. They are automatically invoked whenever the object is created.
3. Do not have return types. They cannot return values.
4. It can have default arguments.
5. We cannot refer to the address.
*/