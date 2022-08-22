#include<bits/stdc++.h>
using namespace std;
 int c;
void  coin(int a[], int n, int val, int t, int i){
	if(i >= n){
		return;
	}
	 if(val > t){
	 	return;
	 }
	 if(val == t){
	 	c++;
	 	cout<<"hii";
	 	return;
	 	
	 }
	 coin(a,n,val+a[i], t,i++);
	 coin(a,n,val,t, i++);
	 
}
int main(){
	int n=3;
	int t=7;
	int a[n]={2,3,5};
	c=0;
	coin(a,n,0,t,0);
	cout<<c;
}
