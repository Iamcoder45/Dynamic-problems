#include<bits/stdc++.h>
using namespace std;
int main(){
  int n=4;
	int wt[]={1,3,4,5};
	int v[]={1,6,5,7};
	int w=7;
	int t[n+1][w+1]={0};
	int m=-100;
	  
	for(int i=1; i<n+1 ; i++){
		for(int j=1; j < w+1; j++){
		
			if(wt[i-1] <= j){
				t[i][j]=max(v[i-1]+t[i-1][j-wt[i-1]], t[i-1][j]);
			}
			else if (wt[i] > j){
					t[i][j]= t[i-1][j];
			}
		}
	}
	
	for(int i=1; i<n+1; i++){
		for(int j=1; j<w+1; j++){
			//cout<<i<<"           "<<j<<endl;
			cout<<t[i][j]<<endl;
			
		   if(t[i][j] > m) m=t[i][j];
		}
	}
	cout<<m;
}
