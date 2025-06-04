#include <iostream>
#include <cstring>
using namespace std;

class Cwh{
    protected:
        string title;
        float rating;
    public:
        Cwh(string s, float r){
            title=s;
            rating=r;
        }
        virtual void display(){
            //virtual likhne ki wajah se dono class ke different display ko call ker rha h pointer ke through
        }
};

class Cwhvideo: public Cwh{
    int videolength;
    public:
        Cwhvideo(string s, float r,int v): Cwh(s, r){
            videolength=v;
        }
        void display(){
            cout<<"This is an amazing video with title"<<title<<endl;
            cout<<"Rating:"<<rating<<endl;
            cout<<"The length of the video is:"<<videolength<<endl;
        }
};
class Cwhtext: public Cwh{
    int textlength;
    public:
        Cwhtext(string s, float r,int l): Cwh(s, r){
            textlength=l;
        }
        void display(){
            cout<<"This is an amazing video with title: "<<title<<endl;
            cout<<"Rating: "<<rating<<endl;
            cout<<"The length of the text is: "<<textlength<<endl;
        }
};
int main(){
    cout<<"Hello World"<<endl;
    string title;
    float rating;
    int wl,vl;

    title="C++ tutorials";
    vl=4;
    rating=4.889;
    Cwhvideo video(title, rating, vl);
    // video.display();
 
 
    title="C++ Tutorials Text";
    wl=433;
    rating=4.889;
    Cwhtext text(title, rating, wl);
    // text.display();

    Cwh *tuts[2];
    tuts[0]=&video;
    tuts[1]=&text;

    tuts[0]->display();
    tuts[1]->display();
    
    return 0;
}

// Rules for virtual function:
// 1. They cannot be static.
// 2. They are accessed by object pointers.
// 3. Virtual function can be the friend of the another class.
// 4. A function in base class might not be used.
// 5. if a virtual function is defined in the base class , there is no neccessity for redefining it in derived class....
