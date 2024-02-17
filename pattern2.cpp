#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the numbers of rows & columns:-";
    cin>>n;
    int i=0;

    while(i<n)
    {
        int j=0;
        while(j<n){
            int temp=i;
            cout<<temp;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}