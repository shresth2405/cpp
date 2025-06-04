#include <iostream>
using namespace std;
#include <math.h>

class Simple_calculator{
    protected:
        int a, b;
    public:
        void setnumbers(int first, int second){
            a=first;
            b=second;
        }
        int add(){
            return a+b;
        }
        int subtract(){
            return a-b;
        }
        int multiply(){
            return a*b;
        }
        int divide(){
            return a/b;
        }

};

class Scientific_calculator{
    protected:
        int a;
    public: 
        void setvalue(int first){
            a=first;
        }
        int sine(){
            return sin(a);
        }
        int cosine(){
            return cos(a);
        }
        int tangent(){
            return tan(a);
        }
        int nonot(){
            return !a ;
        }

};

class Hybrid_calculator:public Simple_calculator, public Scientific_calculator{
    
};

int main(){
    cout<<"Hello World"<<endl;
    Hybrid_calculator First;
    First.setvalue(1);
    cout<<"The sine of the given value is "<<First.sine()<<endl;    
    return 0;
}