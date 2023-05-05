//write a code that will print all number upto 42 ,if it found 42 than break the code.
#include<bits/stdc++.h>
using namespace std;

int main()
{
	while (true) {
		int x;
		cin>>x;
		if (x==42){
			break;
		}
		cout<<x<<endl;
	}
}