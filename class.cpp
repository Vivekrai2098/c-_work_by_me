#include<iostream>
using namespace std;
class Student{
char name[100];
int roll_no;
public:
void input(){
    cout<<"enter your first name"<<endl;
    cin>>name;
    cout<<"enter your roll number"<<endl;
    cin>>roll_no;
}
void output(){
    cout<<"name:="<<name<<endl;
    cout<<"roll numeber:="<<roll_no;
}
};
int main(){
    Student john;
    john.input();
    john.output();
    return 0;
}