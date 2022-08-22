#include<bits/stdc++.h>
using namespace std;
int t[100][100]={0};
 knap(int w[],  int v[], int c, int n){
      if(n == 0 || c==0) return 0;
      if(t[n][c] != 0) return t[n][c];
      if(w[n-1] < c ){
      	return  t[n][c]=max(v[n-1] + knap(w,v,c-w[n-1],n-1) , knap(w,v,c,n-1));
	  }
	  else if(w[n-1] > c) return  t[n][c]=knap(w,v,c, n-1);
	  
}
int main(){
	int w[]={1,3,4,5};
	int v[]={1,6,5,7};
	int c=7;
	int n=4;

	cout<<knap(w,v,c,n)<<endl;
	
}
