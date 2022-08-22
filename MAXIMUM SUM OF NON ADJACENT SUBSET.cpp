#include<bits/stdc++.h>
using namespace std;

int main(){
	int n=5;
	int arr[n]={5,10,110,5,6};
	int inc=arr[0];
	int exc=0;
	
	for(int i=1; i<n; i++){
		int ninc= exc+arr[i]; 
		int nexc= max(inc, exc);  //  Ith element to exclude krte hue pichla wla kka max utha liye
		inc= ninc;
		exc=nexc;
		
	}
	
	cout<<max(inc, exc);
}
