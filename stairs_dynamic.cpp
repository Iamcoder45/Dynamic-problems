#include<bits/stdc++.h>
using namespace std;
int tab(int n, int q[]){
     if(n<0){
     	return 0;
	 }
	 if(n==0){
	     return 1;
	 }
	 if(q[n]>0){ 
	    return q[n];
	 }
	 
	     //cout<<" \n \t hii   "<<n<<endl;
	 	int a=tab(n-1,q);
	 	int b=tab(n-2,q);
	 	int c=tab(n-3,q);
	 	q[n]= a+b+c;
	 	return a+b+c;
}
int main(){
	int n=10;
	int a[n+1];
	for(int i=0 ;i<=n+1; i++){
		a[i]=0;
	}
	cout<<tab(n,a);
}
