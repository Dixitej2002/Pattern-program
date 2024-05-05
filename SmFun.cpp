#include<iostream>
using namespace std;

int AP(int n){
    int Cal_ap=(3*n)+7;
    return Cal_ap;
}

int main(){
    int num;
    cin>>num;
    int ans=AP(num);
    cout<<"Answer is"<<" "<<ans<<endl;

}