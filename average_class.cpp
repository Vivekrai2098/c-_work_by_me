#include<iostream>
using namespace std;
class Average{
public:
int ave(int a,int b,int c);
};
int Average::ave(int a,int b,int c){
return(a+b+c)/3;
}
int main(){
    Average s;
    cout<<"the average is :="<<s.ave(1,1,1);
    return 0;
}