#include<bits/stdc++.h>
using namespace std;
// YOU cannot two zeroes consecutive  n-bianry strings means 1001 is false 1010 is correct
int main(){
	int n=6;
	int dp0=1; // base case
	int dp1=1; // base case
		int n0,n1;
	for(int i=2; i<=n; i++){
		n0= dp1;
		n1= dp1+dp0;
		dp0=n0;
		dp1=n1;
	}
	
	cout<<n0+n1<<endl;
	char c='a';
	c=c+11;
	 cout<<c;
	// there is a same question arrange building
}
