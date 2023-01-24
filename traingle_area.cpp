#include<iostream>
using namespace std;
class Area{
    int l,b;
public:
void setDim(int a,int b);
int getArea();
};
void Area::setDim(int length,int breath){
    l=length;
    b=breath;
}
int Area::getArea(){
    return (l*b);
}
int main(){
    Area s;
    s.setDim(2,5);
    cout<<"the area of the rectangle is :="<<s.getArea();
    cout<<endl;
    return 0;
}