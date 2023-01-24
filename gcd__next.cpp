#include<iostream>
using namespace std;
int main(){
    int first,second;
    cin>>first>>second;
    if(first>second){
            for(int j=first;j>2;j--){
                if(first%j==0 && second%j==0){
                    cout<<"gcd is"<<j<<endl;
                    break;
                }
            }
    }
    else{
            for(int j=second;j>2;j--){
                if(first%j==0 && second%j==0){
                    cout<<"gcd is"<<j<<endl;
                    break;
                }
            }
    }
    return 0;
}