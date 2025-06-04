#include <iostream>
using namespace std;


int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    cout<<"Hello World"<<endl;
    int a;
    cout<<"Enter the value you want the factorial of:"<<endl;
    cin>>a;
    cout<<"The factorial of "<<a<<" is:"<<factorial(a);

    return 0;
}