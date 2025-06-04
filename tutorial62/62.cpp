#include <iostream>
#include <fstream>

using namespace std;

int main(){
    cout<<"Hello World"<<endl;
    ofstream out;
    out.open("Sample62.txt");
    out<<"I am not in the mood\n";
    out<<"I am not in the mood\n";
    out<<"I am not in the mood\n";
    out<<"I am not in the mood\n";
    out.close();

    ifstream in;
    in.open("Sample62.txt");
    string st;
    // getline(in,st);
    // cout<<st;
    // in.close();
    while(in.eof()==0){
        getline(in,st);
        cout<<st<<endl;
    }
    
    return 0;
}