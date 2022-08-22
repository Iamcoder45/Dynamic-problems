#include<bits/stdc++.h>
using namespace std;
void sub(int n, int a[], vector <int> v, int i){
	if(i==n-1){
		int s= accumulate(v.begin(), v.end(),0);
		cout<<s;
	}
      sub(n,a,v.push_back(a[i]), i++);
      sub(n,a,v, i++);
      
}
int main(){
	int n=5;
	int a[n]={ 4,7,1,2,3};
	vector <int> v;
	sub(n,a,v,0);
}
