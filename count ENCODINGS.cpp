#include<bits/stdc++.h>
using namespace std;
int main(){
	string s="21123";
	int dp[s.length()+1];
	
	 dp[0]=1;
	for(int i=1; i<s.length();i++){
		 char ch= s.at(i);
		 char ch1= s.at(i-1);
		 
		if( ch == '0' && ch1 == '0') {
		dp[i]=0;
		cout<<" 0 0 "<<endl;
		}
		else if(ch1 == '0' && ch !='0'){
		    
		dp[i]=dp[i-1];
		cout<<" 0 1 "<<endl;
		}
		else if(ch1 != '0' && ch =='0'){
		 if(ch1 == '1' || ch1 == '2'){
		 
			if(i>=2)
			dp[i]=dp[i-2];
			else dp[i]=0;
		}
		else dp[i]=0;
		cout<<" 1 0 "<<endl;
		}	
		else {
			string r=s.substr(i-1, i+1);
			cout<<" r  :  "<<r<<endl;
			int x=stoi(r);
			if(x <= 26 && i >= 2){
			 
			dp[i] = dp[i-1]+dp[i-2];
			
		}
		else  dp[i]=dp[i-1];
		r="";
		//cout<<" 1 1  "<<endl;
	}
	//cout<<dp[i]<<"   "<<i<<endl;

	}
	cout<<dp[s.length()-1];
}
