#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector <T> &v){
   for (int i = 0; i < v.size(); i++)
   {
    cout<<v[i]<<" ";
   }
   cout<<endl;
}
int main(){
    cout<<"Hello World"<<endl;
    //ways to create a vector
    vector <int> vec1; //zero length int vector
    vector<char> vec2(4); //4 element char vector
    vector<char> vec3(vec2); //4 element char vector from vec2
    vector<int> vec4(6,3); //6 element vectoer of 3s
    display(vec1);
    display(vec2);
    display(vec3);
    display(vec4);
    // int elements;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"Enter the elements:";
    //     cin>>elements;
    //     vec1.push_back(elements);
    // }
    // vec1.pop_back();
    // display(vec1);
    // cout<<endl;
    // vector<int>::iterator iter=vec1.begin();
    // vec1.insert(iter,5,566);
    // display(vec1);

    
    
    return 0;
}