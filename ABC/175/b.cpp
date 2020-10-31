#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  if (n < 3) {
    cout << 0 << endl;
    return 0;
  }
  vector<int> edges;
  rep(i, n) {
    int e;
    cin >> e;
    edges.push_back(e);
  }
  sort(edges.begin(), edges.end());
  int ans = 0;
  rep(i, n) rep(j, n) rep(k, n) {
    if (i >= j) continue;
    if (i >= k) continue;
    if (j >= k) continue;
    if (edges[i] == edges[j]) continue;
    if (edges[j] == edges[k]) continue;
    if (edges[i] + edges[j] > edges[k]) ans++;
  }
  cout << ans << endl;
  return 0;
}
