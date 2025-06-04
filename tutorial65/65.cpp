#include <iostream>
using namespace std;

template <class T1, class T2>
//class templates with multiple parameters
class Myclass{
    public:
        T1 data1;
        T2 data2;

        Myclass(T1 data1, T2 data2){
            this->data1=data1;
            this->data2=data2;

        }

        void display(){
            cout<<this->data1<<endl<<this->data2<<endl;
        }
};

int main(){
    cout<<"Hello World"<<endl;
    Myclass<int,char> obj(2,'a');
    obj.display();
    
    return 0;
}