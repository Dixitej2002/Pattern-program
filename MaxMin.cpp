#include<iostream>
using namespace std;

// int TakeInput(int num[],int size){
    
//     return num[i];
// }

int getMax(int num[],int n){
    int max=INT16_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }

    return max;

}
int getMin(int num[],int n){
    int min=INT16_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }

    return min;

}

int main(){
    int size;
    cout<<"Enter the array size"<<endl;
    cin>>size;

    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"Maximum number in array is"<<" "<<getMax(num,size)<<endl;
    cout<<"Minimum number in array is"<<" "<<getMin(num,size)<<endl;
    


}