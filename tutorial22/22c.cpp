#include <iostream>
using namespace std;

class c2;


class c1{
    int val1;
    friend void exchange(c1 &, c2 &);
    public:
        void setValue( int value){
            val1 = value;
        }
        void display(void){
            cout<<"The value 1 is "<<val1<<endl;
        }
};
class c2{
    int val2;
    friend void exchange(c1 &, c2 &);
    public:
        void setValue( int value){
            val2 = value;
        }
        void display(void){
            cout<<"The value 2 is "<<val2<<endl;
        }
};

void exchange(c1 &x, c2 &y){
    int temp=x.val1;
    x.val1=y.val2;
    y.val2=temp;
}

int main(){
    cout<<"Hello World"<<endl;
    c1 x;
    x.setValue(4);
    x.display();
    
    c2 y;
    y.setValue(6);
    y.display();


    exchange(x, y);
    cout<<"After Exchanging the numbers:"<<endl;
    x.display();
    y.display();
    
    return 0;
}