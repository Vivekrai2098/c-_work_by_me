#include<iostream>
using namespace std;
class box{
    int a=5;
    int &b=a;
};
int main(){
    int a =5;
    int b=4;
    int &p=a;
    // add();
    return 0;
}