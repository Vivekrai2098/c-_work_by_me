#include<iostream>
using namespace std;
inline void add(){
//no argument no return
int a=5,b=6;
cout<<"no argument no return the add value"<<a+b<<endl;
}
inline void add(int f,int s){
    //argument but no return
    cout<<"argument but no return adding value is"<<f+s<<endl;
}
inline int add(int k,int l,int t){
    //argument and also return
    return k+l+t;
}
inline int sub(){
    int a=3,b=1;
    return a-b;
}
int main(){
    //WITH INLINE and overloading
    add();             //no argument no return
    add(5,4);       //argument but no return
    cout<<add(5,4,1)<<endl;   //argument and also return
    cout<<sub()<<endl;//no argument but return
    return 0;
}