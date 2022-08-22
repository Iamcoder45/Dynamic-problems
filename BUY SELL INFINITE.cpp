#include<bits/stdc++.h>
using namespace std;
int  main(){
	int n=6;
	int a[n]={2,4,7,3,1,9};
	int bd=0,sd=0;
	int op=0;
	for(int i=1; i<n; i++){
	    if(a[i] >= a[i-1]) sd++;
		else {
			cout<<" i   "<<i<<endl;
			op += a[sd]-a[bd];
			cout<<op<<endl;
		
			sd=bd=i;
		}	
	}
    	op += a[sd]-a[bd];

	cout<<op; 
}
