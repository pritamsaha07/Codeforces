#include<bits/stdc++.h>
using namespace std;

bool ispal(string s){
    int f=0, e=s.size()-1;
    while(f<e){
        if(s[f]!=s[e]){
            return false;
        }
        else{
            f++;
            e--;
        }
        
    }
    return true;
    
}
int main(){
    int n;
    cin>>n;
    while(n--){
        int l,k;
        cin>>l>>k;
        string s;
        cin>>s;
        
        if(ispal(s)==true){
            cout<< 1 <<endl;
        }
        else{
            if(k==0)
            cout<< 1 <<endl;
            else
            cout<< 2 <<endl;
    }
    }
    return 0;
}