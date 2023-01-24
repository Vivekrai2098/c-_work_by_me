#include<iostream>
using namespace std;
class adddistance{
    int feet,inc;
    public:
    //convert inch into feet;
    void con(int f,int i){
        feet=f;
        inc=i;
    }
    void cal(adddistance tem){
        double c=tem.inc/12;
        double d=inc/12;
        cout<<"the total distance is ...."<<feet+tem.feet+c+d;
    }
};
int main(){
    adddistance first,second;
    first.con(10,5);
    second.con(10,5);
    first.cal(second);
    return 0;
}