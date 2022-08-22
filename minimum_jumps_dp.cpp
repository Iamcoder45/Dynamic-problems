#include <iostream>
#include <vector>
using namespace std;
int c=100000;
int cs(int arr[], int n, int m) {
  // write your code here
  if(m>n) return 0;
     if(m==n) {
          return 1;
     }
    
    for(int i=1; i<=n; i++){
      for(int j=1; j<arr[i]; j++){
         int a=cs(arr,n, i+j);
         
         c=min(a,c);

      }
    }
    
    return c+1;
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0 ; i < n ; i++) {
    cin >> arr[i];
  }

  vector<int> dp(n + 1, 0);

  cout << cs(arr, n,dp) << endl;
}
