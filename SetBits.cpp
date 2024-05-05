#include<iostream>
using namespace std;

int playWithbits(int a,int b){

    int Sum_Bits=(a&b);
    return Sum_Bits;


}

int main(){

    int x,y;
    cin>>x>>y;
    int ans=playWithbits(x,y);
    cout<<"Answer is "<<" "<<ans<<endl;

}