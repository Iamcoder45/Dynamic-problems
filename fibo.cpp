// prblm 
#include<bits/stdc++.h>
using namespace std;
int  fib(int n,int q[]){
	if(n==0 || n==1){
		return n;
	}
	if(q[n]!=0){
		//cout<<" hii  "<<q[n]<<endl;
      return q[n];
	}
	int f= fib(n-1, q) + fib(n-2, q);
	q[n]=f;
	return f;
}
int main(){
   
     int n;
     cin>>n;
     int a[n+1];
     for(int i=0 ;i<=n+1; i++){
		a[i]=0;
	}
     cout<<fib(n ,a);
   }
