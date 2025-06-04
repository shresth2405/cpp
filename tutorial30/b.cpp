#include <iostream>
#include <math.h>
using namespace std;

class space{
    friend void distance(space, space);
    int x,y;
    public:
        space(int a, int b);
        void display(){
            cout<<"The x-coordinate is "<<x<< " and Y-coordinate is "<<y<<endl;
        }

};


void distance(space a, space b){
    float s= (b.x-a.x)*(b.x-a.x) + (b.y-a.y)*(b.y-a.y);
    cout<<"The distance of these point from one another is "<< sqrt(s);

}

space:: space(int a, int b){
    x=a;
    y=b;
}
int main(){
    cout<<"Hello World"<<endl;
    space p(4,5);
    p.display();
    space q(4,7);
    q.display();

    distance(p,q);

    
    return 0;
}