#include <iostream>
using namespace std;

class Y;
class X{
    int data;
    friend void add(X o1,Y o2);
    public:
        void setvalue(int value){
            data=value;
        }
};
class Y{
    int num;
    friend void add(X o1,Y o2);
    public:
        void setvalue(int value){
            num=value;
        }
};
void add(X o1,Y o2){
    cout<<"The sum of the data of o1 and o2 is:"<<(o1.data+o2.num);
};


int main(){
    cout<<"Hello World"<<endl;
    X o1;
    Y o2;
    o1.setvalue(5);
    o2.setvalue(5);
    add(o1, o2);
    
    return 0;
}