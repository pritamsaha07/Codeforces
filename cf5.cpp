#include<bits/stdc++.h>
using namespace std;
int fun(int x, string s){
    map<char,int>mp;

    for(auto x:s){
        mp[x]++;
    }
     
    
    if(mp.find('+')!=mp.end()){
        x++;
    }
    if(mp.find('-')!=mp.end()){
        x--;
    }

    return x;
}
int main(){

    int n;
    cin>>n;
    string s;
    int x=0;
    for(int i=0;i<n;i++){
        cin>>s;
        x=fun(x,s);
    }

    cout<<x;

    return 0;


}