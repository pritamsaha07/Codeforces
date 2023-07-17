#include<iostream>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int drinks_for_toast=(k*l)/nl;
    int total_slices=c*d;
    int salt=p/np;

    int ans=min(min(drinks_for_toast,total_slices),salt)/n;

    cout<<ans;
    return 0;
}