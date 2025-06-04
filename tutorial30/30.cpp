#include <iostream>
using namespace std;


class Complex{
    // Constructor is a special member function with same name as class. It is used to initialize the value of the object of its class.It is automatically invoked.
    int a,b;
    public:
        Complex(int x, int y);
        void printdata(void){
            cout<<"Your number is "<<a<<" + "<<b<<"i";

        }
};

Complex:: Complex(int x, int y){  // parameterized constructor
    a=x;
    b=y; 
}

int main(){
    cout<<"Hello World"<<endl;
    // implicit call
    Complex a(1,2);
    a.printdata();
    cout<<endl;

    //explicit call
    Complex b= Complex(4,5);
    b.printdata();
    return 0;
}