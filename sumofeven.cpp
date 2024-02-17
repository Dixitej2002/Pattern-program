#include<iostream>
using namespace std;

int main(){
    cout<< "Enter the number"<<endl;
    long int n;
    cin>>n;
    int i=1;
    int sum=0;

    while(i<=n){
        //int even=i%2;
        if(i%2==0){
            sum=sum+i;
            
         }
            i=i+1;
    }
    cout<<"Your sum of even number is :"<<sum<<endl;

}