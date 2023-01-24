#include<iostream>
using namespace std;
int main(){
    int a=5;
    // int b=6;
    int *ptr=&a;
    cout<<*ptr;
    ptr++;
    cout<<*ptr;
    // int *ptr2=ptr;
    // *ptr=*ptr2;
    // cout<<b;
    // cout<<ptr<<endl;
    // cout<<ptr2<<endl;
//    a=(*ptr)+(*ptr);
//     cout<<a;
    // cout<<ptr<<endl;
    // cout<<sizeof(a)<<"\n"<<sizeof(ptr);
    // cout<<&a<<endl;
    // int *ptr=&a;
    // cout<<&*ptr<<endl;
    // cout<<*ptr<<endl;
    // *ptr=33;
    // cout<<a;
    return 0;
}