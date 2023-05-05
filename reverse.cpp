#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while (t--){
    	long long int n;
    	int sum=0;
	cin>>n;
	while (n>0){
		 int reminder =n%10;
		sum=sum*10+n%10;
		
		n=n/10;
	}
	cout<<sum<<endl;
	}


	
 }
