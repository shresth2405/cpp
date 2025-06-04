#include <iostream>
using namespace std;

int main(){
    cout<<"Hello World"<<endl;
    int a[]={23,46,69,211};
    int* c=a;
    for (int i = 0; i < 4; i++)
    {
        cout<<*(c+i)<<endl;
    }
    
    return 0;
}