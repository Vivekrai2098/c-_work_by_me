#include<iostream>
using namespace std;
int cal(int start,int end){
if(start<=end){
cout<<start;
cal(start+1,end);
}

    return 0;
}
//that
int main(){
    int start=0;
    int end;
cout<<"enter you want to print the number";
cin>>end;
cal(start,end);



    return 0;
}
