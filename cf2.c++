#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

    long long int n;
    long long int temp;
    int count =0;
	while(t--){
		cin>>n;
		vector<long long> a;
		
		count=0;
		temp=n;
		
			for(int i=2;i<=temp;i++){
				if(n%i==0){
					count++;
					n=n/i;
					
                    a.push_back(i);
					
				}
				
			 if(count==2){
		        a.push_back(n);
			    break;
			}
		}
		
		if(count<2){
            cout<<"NO"<<endl;
        }
        else if(a[0]==a[2] || a[1]==a[2]){
            cout<<"NO"<<endl;
        }
		else{
			cout<<"YES\n";
			cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
			
		}
	}
}