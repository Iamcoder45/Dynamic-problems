#include<bits/stdc++.h>
using namespace std;
// tabulation;
int main(){
	int n=6;
	int dp[n+1];
	dp[1]=1;
	dp[2]=2;
	for(int i=3; i<=n; i++){
		dp[i]=dp[i-1]+dp[i-2]; // its more like fibonacci
		
	}
	cout<<dp[n];
}

