#include <iostream>
using namespace std;

class Number{
    int a;
    public:
    Number(){
       a=0;
    }
        Number(int num){
            a=num;
        }
        Number(Number &obj){
            a=obj.a;  //copy constructor
        }
        void display(){
            cout<<"The number for this class is "<<a<<endl;
        }
};

int main(){
    cout<<"Hello World"<<endl;
    Number x,y,z(2),z1(z);

    x.display();
    y.display();
    z.display();
    z1.display();
    
    return 0;
}

//When no copy constructor is found, a copy constructor is default given by compiler