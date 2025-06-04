#include <iostream>
using namespace std;


template <class T1, class T2>

float avg(T1 a,T2 b){
    T2 avg=(a+b)/2.0;
    return avg;
}

// float avg(int a,float b){
//     float avg=(a+b)/2.0;
//     return avg;
// }
int main(){
    cout<<"Hello World"<<endl;
    float a=avg(5,2.0);
    cout<<a<<endl;
    return 0;
}