#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n==1){
        return 1;
    }
    else if(n==2){
        return 1;
    }
    else{
        int sum=fibonacci(n-1)+fibonacci(n-2);
        return sum;
    }
}
//however this approch is not good for this question . an iterative approach might be better.

int main(){
    cout<<"Hello World"<<endl;
    int a;
    cout<<"Which term of fibonacci sequence??:"<<endl;
    cin>>a;
    cout<<"The fibonacci term at "<<a<<"th place is:" <<fibonacci(a);
    
    return 0;
}