#include<bits/stdc++.h>
using namespace std;
 // UNbounded knapsack
int main(){
	int n=5;
	int wt[n]={2,5,1,3,4};
	int val[n]={15,14,10,45,30};
	int a=-1000;
	int kg=7;
	
	int dp[kg+1];   // 1 D array se duplicacy aati hai
	dp[0]=0;
	for(int i=1; i<=kg; i++){
		for(int j=0; j<n; j++){
			if(wt[j]> i) continue;  // agr dp ke weight se zayda wla weight aa gya toh check nhi krenge 
			      int a1=val[j]+dp[i-wt[j]]; 
				 if(a < a1){
				 	a=a1;
				 }
		}
		dp[i]=a;
	}
	cout<<dp[kg];
}
