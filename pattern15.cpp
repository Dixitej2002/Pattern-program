#include<iostream>
using namespace std;

int main(){
    cout<<"Enter number:-";
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
       int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while (j<=i)
        {
            cout<<j;
            j=j+1;
        }
        int start=i-1;
        while (start)
        {
            cout<<start;
            start=start-1;
        }
        
        

    cout<<endl;
    i=i+1;
}
}