#include<iostream>
#include<string>
using namespace std;
int main(){
    //cat reverse tac
    string arr[3]={"c","a","t"}; 
    for(int i=sizeof(arr)/sizeof(string)-1;i>=0;i--){
        cout<<arr[i];
    }
    return 0;
}