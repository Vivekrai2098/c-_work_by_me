#include<iostream>
using namespace std;
int main(){
    // reverse the number
    char rev[100];
    char valu[100];
    int sum=0;
    int h=1;
    
    cout<<"enter the string :- ";
    cin.getline(valu,100);
    for(int i=0;valu[i]!='\0';i++){
        sum++;
    
    }
    cout<<valu<<endl;
    //reverse the string
    // for(int j=sum;j>=0;j--){
    //     cout<<valu[j]<<" "<<j<<endl;
    //     rev[h]=valu[j];
    // }
    cout<<"this is the reverse"<<sum;




    return 0;
}