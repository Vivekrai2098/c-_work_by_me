#include<iostream>
using namespace std;
class print{
int a;
float b;
double c;
public:
print(int,float,double);
};
print::print(int a,float b,double c){
    cout<<" the integer value is "<<a<<"\n the float value is "<<b<<"\n the double value is "<<c<<endl;
}
int main(){
    print obj(22,12.32,455.665);
    return 0;
}