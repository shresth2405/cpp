#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(){
        a=0;
        b=0;
    }
    Complex(int x, int y) //multiple constructors....
    {
        a = x;
        b = y;
    }
    Complex(int x) //constructor overloading......
    {
        a = x;
        b = 0;
    }
  
   void printdata()
    {
        cout << "The number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    cout << "Hello World" << endl;
    Complex c1(4,6);
    c1.printdata();
    Complex c2(4);
    c2.printdata();

    return 0;
}