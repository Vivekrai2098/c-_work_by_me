#include<iostream>
using namespace std;
int main(){
    int a[3][3]={4,2,3,4,5,6,9,8,9};
    int sum=0;
    int k=9;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cout<<a[i][j];
    }
    cout<<endl;
    }
//the search
for(int p=0;p<3;p++){
        for(int h=0;h<3;h++){
        if(k==a[p][h]){
            sum++;
            break;
        }
    }
    }
cout<<endl;
if(sum>0){
    cout<<"it is exist in this array \n"<<endl;
}
else{
    cout<<"this is not exist in this array"<<endl;
}
  return 0;
}