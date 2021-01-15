#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  map<int, int> odd;
  map<int, int> even;
  rep(i, n) {
    int v;
    cin >> v;
    if (i % 2) {
      odd[v]++;
    } else {
      even[v]++;
    }
  }
  vector<P> p_odd;
  vector<P> p_even;
  for (auto x : odd) {
    p_odd.emplace_back(x.second, x.first);
  }
  for (auto x : even) {
    p_even.emplace_back(x.second, x.first);
  }
  sort(p_odd.rbegin(), p_odd.rend());
  sort(p_even.rbegin(), p_even.rend());

  int ans;
  if (p_odd[0].second != p_even[0].second) {
    ans = n - p_odd[0].first - p_even[0].first;
    cout << ans << endl;
    return 0;
  }
  int ans1 = n - p_odd[0].first - p_even[1].first;
  int ans2 = n - p_odd[1].first - p_even[0].first;
  ans = min(ans1, ans2);
  cout << ans << endl;
  return 0;
}
