#include <iostream>
using namespace std;
template<class T>
class Shresth{
    public:
        T data;
        Shresth (T a){
            data=a;
        }
        void display();
};
template<class T>
void Shresth<T>::display(){
            cout<<"The value of the data is "<<data<<endl;
        }
void func(int a){
    cout<<"I am first func()"<<a<<endl;
}
template<class T>
void func(T a){
    cout<<"I am templatised func()"<<a<<endl;
}

int main(){
    cout<<"Hello World"<<endl;
    Shresth <int>obj(1);
    obj.display();
    func(3);
    
    return 0;
}