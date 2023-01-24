#include<iostream>
#include<string>
using namespace std;
class secure{
    private:
    string name;
    int age;
    int salary;
    public:
    void setdata(string a,int b,int c);
    void getdata();
};
void secure::setdata(string a,int b,int c){
    name=a;
    age=b;
    salary=c;

}
void secure::getdata(){
    cout<<"name"<<name<<"\nage is"<<age<<"\nsalary is"<<salary<<"\n";
}




int main(){
    secure first_men,second;
    first_men.setdata("raju",23,2000);
    first_men.getdata();
    cout<<endl;
    second.setdata("manoj",23,2000);
    second.getdata();
    return 0;
}