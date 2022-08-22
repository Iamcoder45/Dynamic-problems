// number of variable jumps  using tabulation
//
 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 	int n;
 	cin>>n;
 	int arr[n];
 	int dp[n+1];
 	for(int i=0; i<n ;i++){
 		cin>>arr[i];
	 }
	 dp[n]=1;
	 for(int i= n-1; i>=0; i--){
	 	dp[i]=0; // just to assign the value with zero
	 
	 
	 	for(int j=1; j<=arr[i] && i+j<n+1 ; j++){
	 		dp[i] += dp[i+j];
		 		
		 }
	 }
  cout<<dp[0];
	 
 }
