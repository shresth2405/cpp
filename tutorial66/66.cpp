#include <iostream>
using namespace std;


template <class T1=int,class T2=float>
class Shresth{
    public:
       T1 a;
       T2 b;
       Shresth(T1 x, T2 y){
            a=x;
            b=y;
       }
       void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
       } 
};



int main(){
    cout<<"Hello World"<<endl;
    Shresth <> obj(1,2.4);
    obj.display();
    return 0;
}