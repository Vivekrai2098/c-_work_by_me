#include<iostream>
using namespace std;
int main(){
    char arr[100];
    int sum=0;
    cout<<"enter your string"<<" ";
    cin.getline(arr,100);
    for(int i=0;arr[i]!='\0';i++){
        // the white space value is ASCII is 32;
        if(int(arr[i]!=32)){  
            sum++;
        }
    }
cout<<"the total number word in this array is:="<<sum;
    return 0;
}