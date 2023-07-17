
#include <climits>
#include<iostream>

using namespace std;
int main() {
    int t;
    cin>>t;
  int min_value=INT_MAX;;
  int max_value=INT_MIN;
  int mini,maxi;
  for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        
         if(n>max_value){
            maxi=i;
            max_value=n;
        }
        if(n<=min_value){
            mini=i;
            min_value=n;
        }
       
       
    }
    
    if(maxi>mini)
    cout<<(maxi-1)+(t-mini)-1;
    else
    cout<<(maxi-1)+(t-mini);
    
}
