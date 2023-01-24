//user give a number n=10;
//find how many number 1 between to n count and return it;
#include<iostream>
using namespace std;
void prime(int a){
    int check=0;
    int sum=0;
    for(int i=2;i<a;i++){
        for(int j=2;j<a;j++){
            if(i%j==0){
                check++;
            }
        }
        if(check<2){
        sum++;
            cout<<"prime"<<i<<endl;
        }
        check=0;
    }
    cout<<"the total prime number"<<sum<<endl;


}



int main(){
    int number;
    cout<<"enter value";
    cin>>number;
    prime(number);
    


    return 0;
}