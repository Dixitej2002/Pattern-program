#include<iostream>
using namespace std;

int main(){
    int TotalAmount=1330;

    cout<<"1.100"<<endl;
    cout<<"2.50"<<endl;
    cout<<"3.20"<<endl;
    cout<<"4.1"<<endl;
   int ch;
   cin>>ch;
   int CountAmount;
    switch (ch)
    {
    case 1: CountAmount =TotalAmount/100 ;
             TotalAmount=TotalAmount-CountAmount*100;
            cout<<TotalAmount<<endl;
            break;
    
    case 2: CountAmount= TotalAmount/50;
            TotalAmount=TotalAmount-CountAmount*50;
            cout<<TotalAmount<<endl;
             break;
    case 3: CountAmount= TotalAmount/20;
            TotalAmount=TotalAmount-CountAmount*20;
            cout<<TotalAmount<<endl;
             break;
    case 4: CountAmount= TotalAmount/1;
            TotalAmount=TotalAmount-CountAmount*1;
            cout<<TotalAmount<<endl;
             break;

    default: cout<<"We can not find the actual amount"<<endl;
                break;
    }
}