#include<iostream>
using namespace std;
//perimater if triangle is side+side+side
//1/2*base*height
class triangle{
    public:
    triangle(int);
    triangle(int,int);
};
triangle::triangle(int side){
    cout<<"the perimeter of triangle is:= "<<side+side+side<<endl;
}
triangle::triangle(int base,int height){
    cout<<"the area of triangle is:= "<<(base*height)/2<<endl;
}

int main(){
    triangle obj(22);
    triangle obj2(22,22);


    return 0;
}