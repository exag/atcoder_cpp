#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

ll gcd(ll x,ll y){
    if(x<y) swap(x,y);
    //xの方が常に大きい
    ll r;
    while(y>0){
        r=x%y;
        x=y;
        y=r;
    }
    return x;
}

//オーバフローしないようにかける順番を気を付ける
ll lcm(ll x,ll y){
    return ll(x/gcd(x,y))*y;
}

int main() {
  int n;
  cin >> n;
  ll ans = 0;
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n; ++j) {
      for (int k = 1; k <=n; ++k) {
        ans += gcd(gcd(i, j), k);
      }
    }
  }
  cout << ans << endl;
  return 0;
}
