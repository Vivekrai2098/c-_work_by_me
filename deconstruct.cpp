#include<iostream>
using namespace std;
class value{

public:
value();
~value(){
    cout<<"\nthat is the deconstructor";
}
};
value::value(){
cout<<"\nthat is the constructor";
}



int main(){
    value obj;
    return 0;
}