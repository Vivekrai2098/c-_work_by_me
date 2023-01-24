#include<iostream>
using namespace std;
class programming{
    public:
    programming();
    programming(string);
};
programming::programming(){
cout<<"i love programming language"<<endl;
}
programming::programming(string a){
    cout<<"i love "<<a<<endl;
}
int main(){
    programming obj;
    programming obje("python");
    return 0;
}