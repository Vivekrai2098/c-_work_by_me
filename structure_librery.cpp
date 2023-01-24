#include<iostream>
using namespace std;
struct book{
int acc_no;
char author[100];
char book[100];
char title[100];
};
int main(){
    struct book s[100];
    int val;
    cout<<"enter how many book you want to add";
    cin>>val;
    for(int i=0;i<val;i++){
        cout<<i+1<<"__"<<"book value fill"<<endl;
        cout<<"enter accont number"<<endl;
        cin>>s[i].acc_no;
        cout<<"enter author name"<<endl;
        cin>>s[i].author;
        cout<<"enter book name"<<endl;
        cin>>s[i].book;
        cout<<"enter title"<<endl;
        cin>>s[i].title;
        cout<<"...................................................."<<endl;
    }
    cout<<"details enter succefully........"<<endl;
    int decission,sel;
    cout<<"press 1 for extra info"<<endl<<"press 2 for exit programm";
    cin>>decission;
    cout<<"...................................................."<<endl;

    if(decission==1){
        
        cout<<"press 1 for display book information"<<endl<<"press 2 for add a new book"<<endl<<"press 3 for display all the book in the library of particular author"<<endl<<"press 4 display the number of book particular title"<<endl<<"press 5 display the total number of book in the library"<<endl<<"press 6 issue a book"<<endl<<"........................................"<<endl;

        cin>>sel;
        if(sel==1){
            for(int k=0;k<val;k++){
                cout<<k+1<<"__"<<"book name is:-"<<s[k].book<<endl;
            }
        }
        else if(sel==2){
            int list;
            cout<<"how many book you have to enter";
            cin>>list;
            cout<<"we have"<<val <<"book"<<endl;
            for(int q=val;q<val+list;q++){
                cout<<"enter "<<q+1<<" book account number"<<endl;
                cin>>s[q].acc_no;
                cout<<"enter "<<q+1<<"book author name"<<endl;
                cin>>s[q].author;
                cout<<"enter "<<q+1<<" book name"<<endl;
                cin>>s[q].book;
                cout<<"enter "<<q+1<<" book title"<<endl;
                cin>>s[q].title;
                cout<<"...................................................."<<endl;
            }
            val=list+val;
            cout<<"the total book is now:="<<val;

        }
        else if(sel==3){
            for(int w=0;w<val;w++){
                cout<<w<<"book is:="<<s[w].book;
            }
        }
        else if(sel==5){
            cout<<"the total number of the book is"<<val;
        }
        else if(sel==4){
            char ti[100];
            cout<<"enter your book title";
            cin>>ti;
            for(int e=0;e<val-1;e++)
            {
                
                if(s[e].title==ti){
                    cout<<"that is account no"<<s[e].acc_no<<endl;
                    cout<<"that is the autor"<<s[e].author<<endl;
                    cout<<"that is the book name"<<s[e].book<<endl;
                    cout<<"that is the title"<<s[e].title<<endl;
                }
                else{
                    cout<<"not match";
                }
            }
            cout<<ti;
        }

        else{
            cout<<"wrong input";
        }
    


    }
    else if(decission==2){
        cout<<"thank for using the program";

    }
    else{
        cout<<"wrong input try again";
    }




    return 0;
}