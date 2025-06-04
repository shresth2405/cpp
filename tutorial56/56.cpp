#include <iostream>
using namespace std;

class Baseclass{
    public: 
    int varbase=1;
        virtual void display(){
            cout<<"The value of the varbase is "<<varbase<<endl;
        }

};

class Derivedclass: public Baseclass{
    public: 
    int varDerived=2;
        void display(){
            cout<<"The value of the varDerived is "<<varDerived<<endl;
            cout<<"The value of the varbase is "<<varbase<<endl;
        }

};

int main(){
    cout<<"Hello World"<<endl;
    Baseclass *bptr;
    Baseclass b;
    Derivedclass d;
    bptr=&d;
    bptr->display();

    
    return 0;
}