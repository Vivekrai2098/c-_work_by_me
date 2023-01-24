#include<iostream>
using namespace std;
//that is the struct part....
struct details
{
    int roll_no;
    char name[100];
    int age;
    char address[100];
};
//that is the main function
int main(){
    int student;
    int age1;
    int roll_number;
    struct details s[100];
    cout<<"how many student details you want to enter";
    cin>>student;
    //this loop is the fill the roll_no,name,age,and address
    for(int i=0;i<student;i++){
        cout<<i+1<<" "<<"student details fill"<<endl;
        cout<<"enter roll no"<<endl;
        cin>>s[i].roll_no;
        cout<<"enter name"<<endl;
        cin>>s[i].name;
        cout<<"enter age"<<endl;
        cin>>age1;
        //the student age between 11 to 14...
        if(age1>=11 && age1<=14)
        {                   //check the user input the age is correct or not if not get nested
            s[i].age=age1;
            

        }
        else{
            cout<<"only 11 to 14 age student are accepted"<<endl;
            cout<<"enter age between 11 to 14";
            cin>>age1;
        if(age1>=11 && age1<=14)   
        {
            s[i].age=age1;
        }
        else{
            cout<<"only 11 to 14 age student are accepted"<<endl;
            cout<<"error reset the program";
            
        }
        }
        cout<<"enter address"<<endl;
        cin>>s[i].address;
        cout<<"....................................................."<<endl;
    }
    //print the names of all the student having age 14
    for(int j=0;j<student;j++){
      if(s[j].age==14){
          cout<<"that is the name of student which age is 14"<<endl;
          cout<<s[j].name;
          cout<<".........................................................."<<endl;
      }
    }
    //print all the even roll number
    for(int j=0;j<student;j++){
      if(s[j].roll_no%2==0){
          cout<<"that is the name of student which roll number is even"<<endl;
          cout<<s[j].roll_no;
          cout<<".........................................................."<<endl;
      }
    }
    //print details of the student whose roll number is given by the user
    cout<<"enter roll number which you want see the details";
    cin>>roll_number;
    for(int k=0;k<student;k++){
      if(s[k].roll_no==roll_number-1){
          cout<<"Details of the student whose roll number is given by the user"<<endl;
          cout<<"the roll number is"<<s[k].roll_no<<"\n the name is"<<s[k].name<<"\n the age is"<<s[k].age<<"\n Address is"<<s[k].address;
          cout<<".........................................................."<<endl;
      }
    }




    return 0;
}