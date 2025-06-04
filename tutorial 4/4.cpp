#include <iostream>
using namespace std;

int main(){
    cout<<"Hello World"<<endl;
    int a;
    cout<<"Enter the number you want to print the table of:";
    cin>>a;
    for (int i = 1; i <= 10; i++)
    {
       cout<<a<<"X"<<i<<"="<<a*i<<endl;
    }
    return 0;
}