#include<bits/stdc++.h>
using namespace std;

void solev(){
    int n;
    cin>>n;
    int res=0;

    for(int i=1;i<=9;i++){
        int sum=0;
        for(int j=1;j<=4;j++){
            sum=sum*10+i;

            res+=j;
            if(sum=n){
                cout<<res<<"\n";
            }
        }
    }
}

int main(){
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        solev();
    }
    return 0;
}

