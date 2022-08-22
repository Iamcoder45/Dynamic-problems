#include<bits/stdc++.h>
using namespace std;
int main(){
	int m=20;
	int n=5;
	int pole[n]={6,7,12,14,15};
	int price[n]={5,8,5,3,1};
	int d=5;
	int s=0,x=0;

	int dis=0;
	for(int i=0; i<21; i++){
		
		if( i == pole[x]){
			if( dis > d){
				s += price[x];
				dis=0;
			}
			else {
				if(s < price[x]) {
				s= price[x];
				dis=0;
			}
				
			
			}
			x++;
			
		}
		
		dis++;
	}
	cout<<s;
}
