#include<iostream>
using namespace std;
bool prime(int a){
    if(a<=1){
        return false;
    }
    for(int i=2;i<a;i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int number;
    cout<<"enter your number which you check prime or not ?";
    cin>>number;
    if(prime(number)){
        cout<<"that is the prime number";
    }
    else{
        cout<<"that is not a prime number";
    }
    return 0;
}