#include<iostream>
using namespace std;
class box{
    int a;  
    int b;
    public:
    box(int,int);  //constructor
    void show(void){  //inline
        cout<<a<<endl<<b<<endl;
    }
};
box::box(int a,int b){
    this->a=a;      //both are same that why the compiler is confused so this keyword help the make difference between local veriable
    this->b=b;
}
int main(){
    box obj(2,5);
    // obj.setdata(2,5);
    obj.show();
    return 0;
}