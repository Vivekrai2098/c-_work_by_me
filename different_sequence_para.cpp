#include<iostream>
using namespace std;
class sequence{
    public:
    sequence(int,char[100]);
    sequence(char[100],int);
};
sequence::sequence(int a,char b[100]){
cout<<"integer--"<<a<<"\ncharacter "<<b<<endl;
}
sequence::sequence(char p[100],int q){
    cout<<"character--"<<p<<"\ninteger "<<q<<endl;
}
int main(){
    char h[100]="hello";
    sequence obj(22,h);
    cout<<"........................."<<endl;
    sequence obj1(h,33);


    return 0;
}