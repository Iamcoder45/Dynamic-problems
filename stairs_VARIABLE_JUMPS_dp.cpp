#include<bits/stdc++.h>
using namespace std;
 // count the stair path 
 int climb(int n , int v[]){
 	if(n < 0) return 0;
 	if(n==0)  return 1;
 	int c=0;
 	for(int i=1; i<=n; i++){
 		for(int j=1; j<=v[i]; j++){
 			   int a=climb(n-j,v);
 			   c+=a;
		 }
	 }
	 return c;
 }
 
 // Tabulation
 int tabulation(int n, int v[]){
 	int dp[n+1]={0};
 	
 	dp[n]=1;   // jo recursion mei base case hota hai wahi tabulation mei intilize ho jata hai;
 	for(int i=n; i>=0; i--){
 		   
 		for(int j=1; j<=v[i] && i+j<=n; j++){
 		//	cout<<" dp   "<<dp[i]<<endl;
 			cout<<" j  "<<j<<endl;
 			  dp[i] +=dp[i+j];
		 }
	   
	 }
	
	 
	 return dp[0];
 }
 
 
int main(){
	int n=13;
	int v[]={5,5,2,4,1,5,9,8,6,3,8,9,1};
	//cout<<climb(n,v)<<endl;
	
	cout<<tabulation(n,v)<<endl;
}










