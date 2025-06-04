#include <iostream>
using namespace std;


class Bankdeposit{
    int principal,years;
    float rate, amount;
    public:
        // Bankdeposit(){};
        Bankdeposit(int p, int y, float r);
        Bankdeposit(int p, int y, int r);
        void show();

};
Bankdeposit:: Bankdeposit(int p, int y, float r){
    principal=p;
    rate=r;
    years=y;
    amount=p;
    for (int i = 0; i < y; i++)
    {
        amount=amount*(1+r);
    }
    
}
Bankdeposit:: Bankdeposit(int p, int y, int r){
    principal=p;
    rate=r;
    years=y;
    amount=p;
    for (int i = 0; i < y; i++)
    {
        amount=amount*((100+r)/100);
    }
    
}
void Bankdeposit:: show(){
    cout<<"The amount before is "<<principal<<" and the amount becomes "<<amount<<endl;
}

int main(){
    cout<<"Hello World"<<endl;
    int pr,time;
    float r;
    cout<<"Enter the value of principal, time and rate"<<endl;
    cin>>pr>>time>>r;
    Bankdeposit a1(pr, time, r);
    a1.show();
    
    return 0;
}