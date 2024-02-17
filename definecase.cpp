#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter your character(it should be A-Z,a-z,0-9):-"<<endl;
    cin>>ch;
    if (ch>64 && ch<=90)
    {
       cout<<"It is Uppercase character";
    }
    else if (ch>96 && ch<=122)
    {
       cout<<"It is Lowecase character";
    }
    else if(ch>47 && ch<=57){
        cout<<"This is number";
    }
    else{
        cout<<"Your character is not between A-Z,a-z,0-9";
    }
    
    
}