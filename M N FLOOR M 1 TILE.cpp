#include<bits/stdc++.h>
using namespace std;
int tile(int m, int n,int q[]){

	if(m==n) return 2;
	if(m>n) return 1;
	if(q[n] !=0) return q[n];
	
	int a = tile(m,n-1,q);
	int b= tile(m,n-m,q);
	q[n]= a+b;
	return a+b;
}

int main(){
	int m=3;
	int n=8;
	int q[n+1]={0};
	cout<<tile(m,n,q);
}
