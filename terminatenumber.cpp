#include<iostream>
using namespace std;

int main(){
    cout<<"Enter number:-";
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while (j<=i)
        {
            cout<<i-j+1;
            j=j+1;
        }
        cout<<endl;
        i++;
        
    }
}
