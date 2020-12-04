#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  map<ll, int> mp;
  vector<ll> edge;
  rep(i, n) {
    ll a;
    cin >> a;
    mp[a]++;
    if (mp[a] == 2) {
      edge.push_back(a);
      mp[a] = 0;
    }
  }
  ll ans = 0;
  sort(edge.rbegin(), edge.rend());
  if (edge.size() > 1) {
    ans = edge[0] * edge[1];
  }
  cout << ans << endl;
  return 0;
}
