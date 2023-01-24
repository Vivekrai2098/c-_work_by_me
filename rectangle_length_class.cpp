#include<iostream>
using namespace std;
class rectangle{
    int length,breath;
    public:
    rectangle();
    rectangle(int,int);
    rectangle(int);
};
rectangle::rectangle(){
    length=0;
    breath=0;
    cout<<"the area of rectangle is = "<<length*breath<<endl;
}
rectangle::rectangle(int a,int b){
    length=a;
    breath=b;
    cout<<"the area of rectangle is = "<<length*breath<<endl;
}
rectangle::rectangle(int a){
    length=a;
    breath=a;
    cout<<"the area of rectangle is = "<<length*breath<<endl;
}
int main(){
    rectangle s1;
    rectangle s(2,2);
    rectangle s2(9);
    return 0;
}