#include<iostream>
using namespace std;
int main(){
    int arr[2][2]={
        {1,2},
        {2,3}
    };
    int sum=0;
    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
            sum+=arr[i][j];
        }
        // cout<<endl;
    }
    cout<<sum;
    return 0;
}