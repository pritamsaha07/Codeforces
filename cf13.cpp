#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int k;
    cin>>k;

    while(k!=0){
        if(n%10!=0){
            n=n-1;
            }
        else if(n%10==0){
            n=n/10;
        }
        k--;
    }

    cout<<n;
}