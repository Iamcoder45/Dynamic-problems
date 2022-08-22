#include<bits/stdc++.h>
using namespace std;
int m=0;
int t[50][50]={-1};
 int knap(int w[],  int v[], int c, int val,int kg, int i){
	if(i < 0 || w[i]>c) return 0;
	if(kg>c) return 0;

	 if(t[i][kg] != -1) return t[i][kg];
	  m= max(m,val);
	  cout<<"  ma  "<<m<<endl;
   return t[i][kg]= knap(w,v,c,val+v[i],kg+w[i],--i);
   return t[i][kg]=  knap(w,v,c,val,kg,i);
   
   return m;
    
}
int main(){
	int w[]={1,3,4,5};
	int v[]={1,6,5,7};
	int c=7;
	int n=4;
	m=0;
	cout<<knap(w,v,c,0,0,n)<<endl;
	cout<<m;
}
