#include<iostream>
using namespace std;
int main(){
     int arr[3][3]={3,3,4,2,5,6,5,6,7};
     int evan[3][3];
     int odd[3][3];
     //the extract the element into the array
     for(int i;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
             cout<<arr[i][j];
         }
         cout<<endl;
     }
     cout<<"......................................"<<endl;
//sepreate the odd and even number into two different array
for(int p=0;p<3;p++)
{
    for(int k=0;k<3;k++)
    {
        if(arr[p][k]%2==0){
            evan[p][k]=arr[p][k];
        }
        else{
            odd[p][k]=arr[p][k];
        }
    }
}
//printing the even number array
for(int i;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
             cout<<evan[i][j];
         }
         cout<<endl;
     }
     cout<<"......................................"<<endl;
//printing the odd  number array
for(int i;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
             cout<<odd[i][j];
         }
         cout<<endl;
     }




    return 0;
}