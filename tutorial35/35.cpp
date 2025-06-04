#include <iostream>
using namespace std;

int count=0;

//Destructor never takes an argument nor it returns any value
class Num{
    
    public:
        Num(){
            count++;
            cout<<"The value of number at the moment is:"<<count<<endl;
        }
        ~Num(){
            cout<<"This Is the value of the count whren the destuctor is called"<<count<<endl;
            count--;
        }

};

int main(){
    cout<<"We are in main function"<<endl;
    cout<<"Creating an object n1"<<endl;
    Num n1;
    {
        cout<<"Entering the block"<<endl;
        cout<<"Creating two more objects"<<endl;
        Num n2,n3;
        cout<<"Exiting the block"<<endl;
    }
    
    cout<<"We are back in main function"<<endl;
    return 0;
}