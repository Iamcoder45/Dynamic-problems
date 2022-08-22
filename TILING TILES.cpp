#include<bits/stdc++.h>
using namespace std;
int tile(int n,int q[]){
	if(n==1) return 1;
	if(n==2) return 2;
	if(q[n] !=0) return q[n];
	
	int a = tile(n-1,q);
	int b= tile(n-2,q);
	q[n]= a+b;
	return a+b;
}

int main(){
	int n=8;
	int q[n+1]={0};
	cout<<tile(n,q);
}
