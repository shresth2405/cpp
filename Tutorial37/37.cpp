#include <iostream>
#include <string>
using namespace std;


class Employee{
    string name;
    int age;
    int date_of_joining;
    public:
        Employee(string n, int a, int d){
            name=n;
            age=a;
            date_of_joining=d;
        }
        Employee(){}
        void details(){
            cout<<"The name of the employee is "<<name<<" and his age is "<<age<<" and date of joining is "<<date_of_joining<<endl;
        }
};
//Creating a derived class

//default visibility mode is private.
// Private visibilty  mode: Public member of the base class becomes private member ofthe derived class. 
// Public visibilty  mode: Public member of the base class becomes public member ofthe derived class. 
//private members of the base class cannot be inherited.

class Programmer: Employee{
    public: 
        string Programming_language;
        Programmer(string s)
        {
            Programming_language=s;
            cout<<"The programming language is "<<Programming_language<<endl;
        }

};

int main(){
    cout<<"Hello World"<<endl;
    Employee Harry("harry",19,17);
    Harry.details();
    Programmer skillF("python");
    
    return 0;
}