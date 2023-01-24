#include<iostream>
#include<string>
using namespace std;
class Student{
    string name;//the input take this veriable....................
    public:
    Student();
    Student(string);
};
Student::Student(){
    name="unknown";
    cout<<"the name is student is -"<<name<<endl;
}
Student::Student(string a){
    name=a;
    cout<<"the name is student is -"<<name<<endl;
}
int main(){
    Student s;//when no argument passed.......
    Student s1("hello");//when the argument passed..............
}