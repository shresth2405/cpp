#include <iostream>
using namespace std;

class Shop{
    int id;
    float price;
    public:
        void setdata(int a, float b){
            id =a;
            price=b;
        }
        void getdata(){
            cout<<"The id is "<<id<<endl;
            cout<<"The price is "<<price<<endl;
        }
};

int main(){
    cout<<"Hello World"<<endl;
    int size;
    cout<<"No. of shop is:";
    cin>>size;
    Shop *p=new Shop[size];
    for (int i = 0; i < size; i++)
    {
        int id1,price1;
        cout<<"The id and price of this shop is:";
        cin>>id1>>price1;
        p[i].setdata(id1,price1);
    }
    for (int i = 0; i < size; i++)
    {
        cout<<"The details of the shop "<<i+1<<" is"<<endl;
        p[i].getdata();
    }

    

    
    return 0;
}