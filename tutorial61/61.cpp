#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string st2;
    cout<<"Hello World"<<endl;
    string name;
    cout<<"Enter your name:"<<endl;
    cin>> name;
    ofstream hout("This.txt");
    hout<<name;

    hout.close();
    
    
    ifstream hin("This.txt");
    hin>>st2;
    cout<<st2;
    hin.close();
    
    return 0;
}