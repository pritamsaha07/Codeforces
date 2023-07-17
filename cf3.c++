#include<bits/stdc++.h>
#include<cassert>
#include<cmath>
#include<string>
using namespace std;
 long long maxv=1e9;

string digit;
long long len=10000;

string intostring(int n){
    string s;
    while(n){
        int temp=n%10;
        s+= temp+ '0';
        n=n/10;
    }
    reverse(s.begin(), s.end());
    return s;
}

void stringline(){
    for (int i = 0; i <=len; i++)
    {
       digit+=intostring(i);
    }
    
}

int main(){
    stringline();
    int n;
    cin>>n;
    cout<<digit[n-1];
    return 0;
}