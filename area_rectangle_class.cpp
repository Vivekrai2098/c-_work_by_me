#include<iostream>
using namespace std;
//area of the rectangle is:= length*width;
class Rectangle{
public:
int Area(int length,int width){
    return length*width;
}
};
int main(){
    Rectangle first,second;
    cout<<"the area of first rectangle is:="<<first.Area(4,5)<<endl;
    cout<<"the area of second rectangle is:="<<second.Area(5,8)<<endl;
    return 0;
}