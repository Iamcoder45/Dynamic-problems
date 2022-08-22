#include<bits/stdc++.h>
using namespace std;

int ans=10000000;

void minCost(int n, int m, vector<vector<int> > &arr,int sum, int i,  int j, vector<vector<bool> > &visit){
    
    // write your code here
    if(i<0 || i>n || j<0 || j>m || visit[i][j] == true ) return;
    if(i==n-1 && j==m-1){
      //std::cout << sum << std::endl;
      ans= min(ans , sum);
      return;
    }
    visit[i][j]=true;
    minCost(n,m,arr,sum+arr[i][j],i,j+1,visit);
    minCost(n,m,arr,sum+arr[i][j],i+1,j,visit);
 
      visit[i][j]=false;
  
    return;
  
}







int main() {
  //write your code here
   int n;
  int m;

  cin >> n >> m;
  
  vector<vector<int> > arr(n, vector<int>(m));		

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }
  
  vector<vector<bool> > visit(n, vector<bool>(m));		
  
     minCost(n, m, arr,0,0,0,visit);
     cout<<ans;

}
