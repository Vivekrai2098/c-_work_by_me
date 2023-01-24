#include<iostream>
using namespace std;
class Employee{
    char name[100];
    int year_joining;
    char address[100];
    public:
    void input();
    void show();

};
//input
void Employee::input(){
    cout<<"enter employee name"<<endl;
    cin>>name;
    cout<<"enter year of joining"<<endl;
    cin>>year_joining;
    cout<<"enter the adddress of employee"<<endl;
    cin>>address;
}
//show
void Employee::show(){
    cout<<"employee name.."<<name<<endl;
    cout<<"year of joining.."<<year_joining<<endl;
    cout<<"the adddress of employee.."<<address<<endl;
}


int main(){
    Employee Robert,sam,john;
    Robert.input();
    sam.input();
    john.input();
    Robert.show();
    sam.show();
    john.show();



    return 0;
}