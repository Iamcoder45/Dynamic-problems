#include<bits/stdc++.h>
using namespace std;
int main(){
	 string g="";
	string s="vnrtysfrzrmzlygfv";
	for(int i=0; i< s.length(); i++){
		for(int j=i+1; j<s.length()+1;j++){
			  string x= s.substr(i,j);
			  cout<<" substring   ->  "<< s.substr(i,j)<<endl;
			   reverse(x.begin(),x.end());
			   
			    if(x== s.substr(i,j)){
			       if(x.length() > g.length()){
			       	    g=x;
				   }
			}
		}
	}
	cout<<g;
}
