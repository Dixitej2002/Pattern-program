#include<iostream>
using namespace std;

int main(){
    cout<<"Enter number:-";
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while(j<=i){
            char ch='A'+i+j-2;
            cout<<ch<<" ";
            // ch=ch+1;
            j=j+1;
            }
            cout<<endl;
            i=i+1;
    }
    
}