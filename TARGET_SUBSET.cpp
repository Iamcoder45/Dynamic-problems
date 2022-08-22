#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=5;
	int a[n]={4,7,3,2,1};
	int t=10;
	bool dp[n+1][t+1];
	for(int i=0; i<n+1; i++){
		for(int j=0; j<t+1; j++){
			
			if(i==0 && j==0){
				dp[i][j]=true;
				cout<<i<<"     ->    "<<j<<"    ->  "<<dp[i][j]<<endl;
			}
			else if(i==0){
				dp[i][j]=false;
					cout<<i<<"     ->    "<<j<<"    ->  "<<dp[i][j]<<endl;
			}
			else if(j==0){
				dp[i][j]= false;
			//	cout<<i<<"     ->    "<<j<<"    ->  "<<dp[i][j]<<endl;
			}
			else{
				int val=a[i-1];
				if(dp[i-1][j] == true){
					dp[i][j]=true;
						//cout<<i<<"     ->    "<<j<<"    ->  "<<dp[i][j]<<endl;
				}
			
				else if(j >= val){
				
					if(dp[i-1][j-val] == true) {
						dp[i][j]=true;
						cout<<i<<"     ->    "<<j<<"    ->  "<<dp[i][j]<<endl;
					}
					else dp[i][j]=false;
				}
			
			}
			
		}
	}
	cout<<dp[n][t];
	
}
