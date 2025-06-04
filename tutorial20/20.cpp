#include <iostream>
using namespace std;

class Employee{
    private:
        int a,b;
    public:
        int c,d,e;
    void setdata(int a1, int b1, int c1);
    void getdata(){
        cout<<"The value of a is:"<< a<<endl;
        cout<<"The value of b is:"<< b<<endl;
        cout<<"The value of c is:"<< c<<endl;
        cout<<"The value of d is:"<< d<<endl;
        cout<<"The value of e is:"<< e<<endl;
    }

};
void Employee:: setdata(int a1, int b1, int c1){      //:: scope resolution operator
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    cout<<"Hello World"<<endl;
    Employee Harry;
    // Harry.a=84; will throw error as cannot be accessed as it is private
    Harry.d=34;
    Harry.e=343;
    Harry.setdata(3,4,6);
    Harry.getdata();

    
    return 0;
}