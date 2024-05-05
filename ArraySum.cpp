#include<iostream>
using namespace std;

    int sumOfArray(int arr[],int n){
        int Sum=0;
        for(int i=0; i<n; i++){
            Sum = Sum + arr[i];
        }
        return Sum;

    }

int main(){
    int arr[100];
    cout<<"Enter size of Array"<<endl;
    int n;
    cin>>n;
    
    cout<<"Enter array element:-"<<endl;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Your Sum of Array is:-"<<sumOfArray(arr,n);

}