#include<iostream>
using namespace std;
int main(){
    char valu[100];
    cout<<"enter the string :- ";
    cin.getline(valu,100);
    cout<<"befor concatination :==="<<valu<<endl;
    for(int i=0;valu[i]!='\0';i++)
    {
        if(int(valu[i])==32){
            valu[i]=valu[i+1];
        }
    }
cout<<"after concatination :==="<<valu;
    return 0;
}