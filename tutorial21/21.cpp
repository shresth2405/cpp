#include <iostream>
using namespace std;

class Complex{
    int a,b;
    friend Complex addition(Complex o1, Complex o2);
    public:
        void setdata(int a1, int b1 ){
            a=a1;
            b=b1;  
        };
        void getdata(void){
             cout<<"The complex number is "<<a <<" + "<<b<<"i"<<endl;
        };
};

Complex addition(Complex o1,Complex o2){
    Complex o3;
    o3.setdata((o1.a +o2.a),( o1.b +o2.b));
    return o3;
}


int main(){
    cout<<"Hello World"<<endl;
    Complex o1,o2,o3;
    o1.setdata(1,4);
    o1.getdata();
    o2.setdata(1,5);
    o2.getdata();
    o3=addition(o1,o2);
    o3.getdata();
    return 0;
}