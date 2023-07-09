#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main()
{
     std::ios::sync_with_stdio(false);cin.tie(NULL); 
     int t; cin >> t;

     while(t--){
          int n;
          cin >> n; 
          int a[n];

          int ans = 1;

          for(int i = 0 ; i < n ; i++){
               cin >> a[i];
          }

          for(int i = 0 ; i < n ; i++){
              ans = (ans * a[i])/__gcd(ans,a[i]);
          }

          cout << ans << '\n';
     }
   
     return 0;
}

