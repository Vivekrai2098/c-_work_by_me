#include<iostream>
using namespace std;
class mammals{
    public:
    void show1(){
        cout<<"i am mammal";
    }
};
class marine_animal{
    public:
    void show2(){
        cout<<"i am marine";
    }
};
class blue_whale:public mammals,public marine_animal{
public:
void show3(){
        cout<<"i am belong both the categories";
    }
};
int main(){
    blue_whale obj;
    obj.show1(); // function of mammals by the object of mammal;
    cout<<endl;
    obj.show2(); // function of marineanimal by the object of marineanimal
    cout<<endl;
    obj.show3(); //function of each of its parent by the object of blue whale
    return 0;
}