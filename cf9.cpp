#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int pw=1;
        vector<int>v;
        while(n!=0){
            if(n%10){
                v.push_back((n%10)*pw);
            }
            n=n/10;
            pw=pw*10;
        }

        cout<<v.size()<<"\n";

        for(auto x: v ){
            cout<<x<<" ";
        }

    }
}