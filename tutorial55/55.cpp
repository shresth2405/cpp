#include <iostream>
using namespace std;

class Baseclass{
    public: 
    int varbase;
        void display(){
            cout<<"The value of the varbase is "<<varbase<<endl;
        }

};

class Derivedclass: public Baseclass{
    public: 
    int varDerived;
        void display(){
            cout<<"The value of the varDerived is "<<varDerived<<endl;
            cout<<"The value of the varbase is "<<varbase<<endl;
        }

};
int main(){
    cout<<"Hello World"<<endl;
    Baseclass *A;
    Baseclass b1;
    Derivedclass d1;
    A=&d1;  //baseclass ka pointer derived class ke object ko point ker skta h par agar hm aise function ko run kere jo ki base aur derived dono class 
            //mein hai toh woh baseclass se linked function ko run kerega......
    A->varbase=34;
    A-> display();
    //A->varDerived=34; //will show an error as we cannot access base class pointer to the object of the derived class which is not inherited by the base class
    Derivedclass *B;
    B=&d1;
    B->varbase=98;
    B->varDerived=48;
    B->display();
    A-> display();
    
    return 0;
}