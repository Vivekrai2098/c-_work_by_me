#include<iostream>
using namespace std;
class Complex{
    int R,I;
    public:
    void set(int r,int i);
    void sum(Complex temp);
    void subtract(Complex temp);
    void product(Complex temp);
};
void Complex::set(int r,int i){
    R=r;
    I=i;
}
//total
void Complex::sum(Complex temp){
    int real_total=R+temp.R;
    int imgin_total=I+temp.I;
    cout<<"the total complex number is :="<<real_total<<" "<<imgin_total<<"i"<<endl;
}
//subtract
void Complex::subtract(Complex temp){
    int real_total=R-temp.R;
    int imgin_total=I-temp.I;
    cout<<"the subtract complex number is :="<<real_total<<" "<<imgin_total<<"i"<<endl;
}
//product
void Complex::product(Complex temp){
    int real_total=R*temp.R;
    int imgin_total=I*temp.I;
    cout<<"product complex number is :="<<real_total<<" "<<imgin_total<<"i"<<endl;
}
int main(){
    Complex first_no,second_no;
    first_no.set(3,4);
    second_no.set(4,5);
    first_no.sum(second_no);
    first_no.subtract(second_no);
    first_no.product(second_no);
    return 0;
}