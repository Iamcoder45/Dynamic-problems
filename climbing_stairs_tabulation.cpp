#include<bits/stdc++.h>
using namespace std;
 // count the stair path 

// recursion approach
int c=0;
 int climb(int n,int i){
	if(i>n) return 0;
	if(i==n) return 1;
	c++;
	cout<<"hello"<<"  i "<<c<<endl;
   	climb(n,i+1);
    climb(n,i+2);
	climb(n,i+3);

	return c;
}

// dynamic by memorization
long countdown(int n, long qb[]){
	if(n<0) return 0;
	if(n==0) return 1;
	if(qb[n] != 0) {
		return qb[n];
	}
	cout<<"hello"<<"  n "<<n<<endl;
	qb[n-1]=countdown(n-1,qb);
	   
	qb[n-2] =countdown(n-2,qb);

	qb[n-3] = countdown(n-3,qb);

	return 	qb[n-1]+qb[n-2]+qb[n-3];
	
	// or we can also do by this also   ( line number 26 se 32 )
	
	// int a= countdown(n-1,qb);
	// int b= countdown(n-2,qb);
	// int c= countdown(n-3,qb);
	// int cd= a+b+c;
	//qb[n]=cd;
	// return cd;
	   
}


 //by tabulation
 
 
 int tabulation(int n){
 	int dp[n+1];
 	dp[0]=1;
 	for(int i=1; i<=n; i++){
 		if(i==1)  {
 		dp[i]= dp[i-1];	
		 }	
		 else if(i==2) {
		 	 dp[i] = dp[i-1]+dp[i-2];
		 }
		
		 else {
		 	 dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
		 } 
		
	 }
	 return dp[n];
 }
 
 
 
int  main(){
	int n=6;
//	climb(n,0);
     //cout<<c<<endl<<"\n\n\n\n";
	long qb[n+1]={-1};
	//cout<<countdown(n,qb)<<endl;
	cout<<tabulation(n);
}













