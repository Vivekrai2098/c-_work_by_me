#include<iostream>
using namespace std;
//area of the triangle 1/2 base*height and perimter=(side+base+side) using class
class Triangle{
public:
int perimeter(int a,int b,int c){
    return (a+b+c);
}
double area(int base,int height){
    return (1*base*height)/2;
}
};
int main(){
    Triangle sec;
    cout<<"the perimeter of triangle is:="<<sec.perimeter(3,4,5);
    cout<<endl;
    cout<<"the area of triangle is:="<<sec.area(3,4);
    cout<<endl;
    return 0;
}