#include<iostream>
using namespace std;

void SwapALT(int arr[],int n){
    int f1=0,f2=1;
    if(f1<=n && f2<=n){
        for (int i = 0; i < n; i++)
        {
            swap(arr[f1],arr[f2]);
            f1=f1+2;
            f2=f2+2;
        }
        
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}


int main(){

    int arr[7]={2,4,6,32,54,20,65};

    SwapALT(arr,7);

}