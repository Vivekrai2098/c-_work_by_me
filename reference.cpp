#include<iostream>
using namespace std;
int main(){
    //this is the reference
    int  a=10;
    int &value=a;
    cout<<value<<endl;
    cout<<"..................."<<endl;
    int g=12;
    int &d=g;
    cout<<d<<endl;


    return 0;
}