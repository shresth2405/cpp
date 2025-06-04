#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    cout<<"Hello World"<<endl;
    map<string,int> marksMap;
    marksMap["Akshat"]=98;
    marksMap["Shresth"]=41;
    marksMap["Shivi"]=45;  

    map<string,int>:: iterator iter;
    for ( iter = marksMap.begin(); iter !=marksMap.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }

    
    
    return 0;
}