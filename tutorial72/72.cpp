#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst){
    list<int>:: iterator it;
    it=lst.begin();
    for ( it = lst.begin(); it!= lst.end(); it++)
    {
        cout<<*it<<endl;
    }
    cout<<endl;
    
    
}

int main(){
    cout<<"Hello World"<<endl;
    list <int> list1;
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(8);
    list1.push_back(9);
    list1.push_back(10);
    display(list1);

    list <int> list2(3);
    list<int>:: iterator iter;
    iter=list2.begin();
    *iter=45;
    iter++;
    *iter=46;
    iter++;
    *iter=47;
    iter++;
    display(list2);


    // list<int>:: iterator iter;
    // iter=list1.begin();
    // cout<<*iter<<endl;
    // iter++;
    // cout<<*iter<<endl;
    // iter++;
    // cout<<*iter<<endl;
    // iter++;
    // cout<<*iter<<endl;
    
    return 0;
}