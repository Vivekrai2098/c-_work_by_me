#include<iostream>
using namespace std;
int main()
{
    char store[100];
    int op=0;
    cout<<"enter your value";
    cin.getline(store,100);
    char low[100];
    int val=0;
    char cap[100];
    int j=0;
    // small letter store
    for(char a='a';a<='z';a++){
        low[val]=a;
        val++;
    }
    // capital letter stor
    for(char A='A';A<='Z';A++){
        cap[j]=A;
        j++;
    }
    //show the current array
    for(int v=0;store[v]!='\0';v++){
        for(int p=0;low[p]!='\0';p++){
            if(store[v]!=low[p]){
                op++;
                break;
            }
        }
    }
cout<<op<<endl;
    return 0;
}