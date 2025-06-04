#include <iostream>
using namespace std;


class Base{
    protected: 
        int a; // 
    public:
        int b;
    
};


// for a protected member :
/*                     Public derivation      Private derivation           Protected derivation
1. private              not inherited          not inherited                   not inherited 
2. Protected            Protected              private                         Protected
3. Public                public                 private                        protected
*/


class Derived : Base{

};
int main(){
    cout<<"Hello World"<<endl;
    Base b;
    Derived d;
    // cout<<b.a; // will give error as a is protected.......
    // cout<<d.a; // will give error as a is protected.......
    
    return 0;
}