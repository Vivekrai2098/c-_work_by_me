#include<iostream>
using namespace std;
void max_find(int first){
    if(first%2==0){
        cout<<"this is the even number"<<endl;

    }
    else{
        cout<<"this is the odd number"<<endl;
    }
}
int main(){
    int first;
    cout<<"enter value"<<endl;
    cin>>first;
    max_find(first);

}