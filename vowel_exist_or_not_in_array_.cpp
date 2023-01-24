#include<iostream>
using namespace std;
int main(){
    char value[100];
    int sum=0;
    cout<<"enter your string"<<" ";
    cin.getline(value,100);
    char a[10]="a,e,i,o,u";
    for(int i=0;a[i]!='\0';i++){
        for(int j=0;value[j]!='\0';j++){
            if(a[i]==value[j]){
                sum++;
            }
        }
    }
cout<<"the total number of vowel in this array is:="<<sum<<endl;
    return 0;
}