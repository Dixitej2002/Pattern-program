#include<iostream>
using namespace std;

int binarySearch(int ar[],int n,int key){
    
    int lb=0;
    int ub=n-1;
    for(int i=lb;i<=ub;i++)
    {
    int mid = lb + (ub - lb) / 2;
        if (ar[mid]==key)
            return mid;
        else if (key>ar[mid])
        {
           lb=mid+1;
           
        }
        else if(key<ar[mid]){
            ub=mid-1;
        }
        
    }
       return -1;
}
int main(){
    int a[]={2,3,5,10,12};
    int key=5;
    // int size=;
    int result=binarySearch(a,5,key);
    if (result !=-1)
    {
        cout<<"Element found at index"<<" "<<result<<endl;
    }
    else{
        cout<<"The element is not present in an array"<<endl;
    }
    

}