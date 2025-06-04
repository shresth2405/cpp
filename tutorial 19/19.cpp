#include <iostream>
using namespace std;
int sum(int a, int b){

    cout<<"\nUsing function with 2 arguments"<<endl;
    return (a+b);
}
int sum(int a, int b, int c){
    cout<<"\nUsing function with 3 arguments"<<endl;
    return (a+b+c);
}
//function overloading

int main(){
    cout<<"Hello World"<<endl;
    cout<<"The sum of 5,6 is "<<sum(5,6);
    cout<<"The sum of 5,6,7 is "<<sum(5,6,7);
    
    return 0;
}