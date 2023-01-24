#include<iostream>
using namespace std;
int main(){
    char valu[100]="hello";
    int sum=0;
    cout<<"enter the string :- ";
    cin.getline(valu,100);
    for(int i=0;valu[i]!='\0';i++){
        sum++;
    }
    //reverse the string
    for(int j=sum;j>=0;j--){
        cout<<valu[j];
    }
    return 0;
}