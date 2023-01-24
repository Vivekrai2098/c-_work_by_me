#include<iostream>
using namespace std;
class co{
    int a,b;
    public:
    void take(int,int);
    void show();
    co operator +(co h){
        co temp;
        temp.a=a+h.a;
        temp.b=b+h.b;
        return temp;
    }
};
void co::take(int p,int q){
    a=p;
    b=q;
}
void co::show(){
    cout<<"that is the a:"<<a<<"\n that is the b:"<<b;
}
int main(){
    co obj,ob2,o;
    obj.take(2,3);
    ob2.take(4,8);
    o=obj+ob2;
    o.show();
    return 0;
}