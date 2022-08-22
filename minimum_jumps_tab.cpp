// number of minimum  variable jumps  using tabulation
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
	 for(int i=n-1; i>=0; i--){
	 	int minm =45454;
	 	dp[i]=0;
	 	for(int j=1; j<=arr[i] && i+j<n ; j++){
	 		 if(dp[i+j] != 0){
	 		 minm = min(dp[i+j] , minm);   
	 		 cout<<"  i+j =  "<<dp[i+j]<<endl;
		 }
	}
	    if(minm != 45454){
	
		 dp[i] += minm;
	}
	    else
	     {
	     	dp[i]=0;
		 }
	 }
	 cout<<dp[0];
	 
 }
