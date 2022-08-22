#include<bits/stdc++.h>
using namespace std;
recur(int n){
	if(n==0) return 0;
	if(n==2)  return 2;
	if(n==1) return 1;
	int a= recur(n-1);
	int b= recur(n-2) * (n-1);
	return a+b;
}
int main(){
	int n=5;
	int dp[n+1];
	dp[1]=1;
	dp[2]=2;
	for(int i=3; i<=n; i++){
		dp[i]= dp[i-1] + dp[i-2] * (i-1);
	}
	cout<<dp[n]<<endl;
	cout<<recur(n);
}
