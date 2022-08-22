#include<bits/stdc++.h>
using namespace std;
int main(){
  string s="abda",r="";
  int j=1;
 int i=0;
  	int n=0;
  		 while( n < s.length()){
  		
  		 	  if(s[i] > s[j]){
				 //cout<<j<<endl;
  		 	  for(int k=n; k<j; k++){
  		 	  	  //  cout<<"  k   ->     "<<k<<endl;
  		 	  	    //cout<<" s[k]    "<<s[k]<<endl;
  		 	  	     r+=s[k];
  		 	  	 
				 }
				 n=i;
			}
			else {
				j++;
				i++;
		   }
	}
		  
	  
  reverse(r.begin(),r.end());
  cout<<r;
}
