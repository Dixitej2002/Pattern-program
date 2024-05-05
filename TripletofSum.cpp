#include<iostream>
using namespace std;

void TripletSum(int arr[],int n,int num){

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for (int k = j+1; k < n; k++)
            {
                if(arr[i]+arr[j]+arr[k]==num){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
                // else{
                //     cout<<"Not a triplet number"<<endl;
                // }
            }
            
        }
    }

}

int main(){

    int arr[7]={3,53,6,8,10,11,32};

    int num;
    cin>>num;
    TripletSum(arr,7,num);


}