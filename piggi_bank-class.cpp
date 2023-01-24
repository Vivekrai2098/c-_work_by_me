#include<iostream>
using namespace std;
class addamount{
    int amount=50;
    public:
    addamount();
    addamount(int);
};
addamount::addamount(){
cout<<"no amount added piggie bank"<<endl;
}
addamount::addamount(int a){
    amount+=a;
    cout<<"amount added succefully in your piggie bank--"<<amount<<endl;
}
int main(){
    addamount s1;
    addamount s(10);



    return 0;
}