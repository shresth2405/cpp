#include <iostream>
#include <fstream>
using namespace std;


// The useful classes for woring with fies in C++ are:
// 1. fstreambase
// 2. ifstream-->derived from fstreambase
// 3. ofstream-->derived from fstreambase

// In order to work with the files in C++, you will have to open it . Primarily there are 2 ways to open a file:
// 1. Using the _String_constructor_concat_tag
// 2. Usinf=g the member function open() of the class 

int main(){
    cout<<"Hello World"<<endl;
    string s=" Shresth";
    string st2;

    //opening a file using a constructor and writing to it
    ofstream out("samplefile.txt");
    out<<s;
    //opening a file using a constructor and reading to it
    ifstream in("samplefileb.txt");
    // in>>st2;
    getline(in,st2);
    cout<<st2;
    
    return 0;
}