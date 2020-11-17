#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  ll ans;
  int i = 1;
  while (true) {
    ll p = i * i;
    if (p > n) break;
    ans = p;
    i++;
  }
  cout << ans << endl;
  return 0;
}
