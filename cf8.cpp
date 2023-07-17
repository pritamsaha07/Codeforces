#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int x1,x2,x3;
    
    cin>>x1>>x2>>x3;

    int arr[2];

    arr[0]=x1;
    arr[1]=x2;
    arr[2]=x3;

    std::sort(arr,arr+3);

    int l=arr[2]-arr[1];
    int r=arr[1]-arr[0];

    cout<<(l+r);


   
}