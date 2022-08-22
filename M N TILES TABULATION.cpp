#include<bits/stdc++.h>
using namespace std;
// tabulation;
int main(){
	int n=8;
	int m=3;
	int dp[n+1];
	dp[1]=1;
	dp[2]=2;
	for(int i=3; i<=n; i++){
		if(i==m) dp[i]=2;
		else if( i< m) dp[i]=1;
		else{
		
		dp[i]=dp[i-1]+dp[i-m];
	}
	}
	cout<<dp[n];
}

