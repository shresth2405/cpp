#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main(){
    cout<<"Hello World"<<endl;
    //Function objects: Function wrapped in a class so that it is available like an object
    int arr[]={1,43,4,12,54,77,7};
    sort(arr,arr+7);
    sort(arr,arr+7, greater<int>());
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}