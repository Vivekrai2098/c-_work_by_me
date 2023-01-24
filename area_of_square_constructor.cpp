#include<iostream>
using namespace std;
class print{
public:
print(int,int);
print(int);
};
print::print(int length,int breath){
    cout<<"the area of the rectangle is:="<<length*breath<<endl;
}
print::print(int side){
    cout<<"the area of the square is:="<<side*side<<endl;
}
int main(){
    print obj(3,2);
    print obj2(22);





    return 0;
}