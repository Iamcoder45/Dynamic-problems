#include<bits/stdc++.h>
using namespace std;
int m=0;
 knap(int w[],  int v[], int c, int val,int kg, int i){
	if(i < 0 || w[i]>c) return 0;
	if(kg>c) return 0;
	 m= max(m,val);
	 cout<<"  i   ->   "<<i<<"        ";
	 cout<<"  val   ->   "<<val<<endl;
    knap(w,v,c,val+v[i],kg+w[i],--i);
    knap(w,v,c,val,kg,i);
    
}
int main(){
	int w[]={1,3,4,5};
	int v[]={1,6,5,7};
	int c=7;
	int n=4;
	m=0;
	knap(w,v,c,0,0,n);
	cout<<m;
}
