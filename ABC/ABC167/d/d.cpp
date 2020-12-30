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
  ll k;
  cin >> n >> k;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<int> route;
  vector<int> visited(n + 1, -1);
  int v = 1;
  while (visited[v] == -1) {
    visited[v] = route.size();
    route.push_back(v);
    v = a[v - 1];
  }
  int c = route.size() - visited[v];
  int l = visited[v];
  if (k > l) {
    k = l + (k - l) % c;
  }
  cout << route[k] << endl;
  return 0;
}
