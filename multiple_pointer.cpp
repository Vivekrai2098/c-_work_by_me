#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr=&a;
    int **pt=&ptr;
    cout<<"last value--"<<pt<<"..."<<**pt<<endl;
    cout<<"middle value--"<<ptr<<"..."<<*ptr<<endl;
    cout<<"first_one--"<<&a<<"..."<<a<<endl;



    return 0;
}