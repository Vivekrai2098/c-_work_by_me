#include<iostream>
#include<string>
using namespace std;
int main(){
    try{
        int a=5;
        int b=0;
        string g="zero";
        if(b!=0)
        {
            cout<<a/b<<endl;
        }
        else{
            throw g;
        }
    }
    catch(string h){
        cout<<endl<<"you never divide "<<h<<endl;
    }

    return 0;
}