#include <iostream>
using namespace std;

inline int product(int x, int y){
    return x*y;
}
int main(){
    cout<<"Hello World"<<endl;
    int a,b;
    cout<<"Enter the value of a and b:"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is:"<<product(a,b)<<endl;
    cout<<"The product of a and b is:"<<product(a,b+1)<<endl;
    return 0;
}
//limitation: While using static variable we should not use inline function