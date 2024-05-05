#include<iostream>
using namespace std;

void printReverse(int arr[],int size){
    
    for (int i = size-1; i>=0; --i)
    {
        cout<<"After Reverse the array:"<<arr[i]<<endl;
    }
    
}


int main(){

    int size;
    cin>>size;
    int arr[50];

    for (int i = 0; i < size; i++)
    {

        cin>>arr[i];
    }
    printReverse(arr,size);

    

}