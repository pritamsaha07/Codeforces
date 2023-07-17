#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;

   

    

    int sum=0;

    for(int i=1;i<=c;i++){
        sum+=(a*i);
    }

    if((sum-b)<0){
        cout<<0;
    }

    else{
        cout<<(sum-b);
    }
}