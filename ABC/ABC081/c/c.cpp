#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  map<int, int> mp;
  rep(i, n) {
    int a;
    cin >> a;
    mp[a]++;
  }
  int kind = mp.size();
  int ans = 0;
  vector<int> v;
  for (auto x : mp) {
    v.push_back(x.second);
  }
  sort(v.begin(), v.end());
  for (int x : v) {
    if (kind <= k) break;
    ans += x;
    kind--;
  }
  cout << ans << endl;
  return 0;
}
