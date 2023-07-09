#include <iostream>
using namespace std;

#define int long long int

int32_t main() {
     int t; cin >> t;

     while(t--){
          int n; cin >> n;
          int ans = ((n+1)/2) * ((n+1)/2);
          cout << ans << '\n';
     }
     
     return 0;
}