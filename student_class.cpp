#include<iostream>
using namespace std;
class Student{
double roll_number,phone_number;
char address[100],name[100];
public:
void input(){
    cout<<"enter student name  ";
    cin.getline(name,100);
    cout<<"enter student address  ";
    cin.getline(address,100);
    cout<<"roll number ";
    cin>>roll_number;
    cout<<"enter phone number  ";
    cin>>phone_number;
    cout<<"......................................................"<<endl;
}
    void output(){
    cout<<"student name:="<<name<<endl;
    cout<<"roll number:="<<roll_number<<endl;
    cout<<"phone number:="<<phone_number<<endl;
    cout<<"student address:="<<address<<endl;
    cout<<"......................................................"<<endl;
}
};
int main(){
    Student john,sam;
    john.input();
    sam.input();
    john.output();
    sam.output();
    return 0;
}