#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const int INF = 1001001001;
vector<int> to[2005];

int main() {
  int n, x, y;
  cin >> n >> x >> y;
  x--;
  y--;
  rep(i, n - 1) {
    to[i].push_back(i + 1);
    to[i + 1].push_back(i);
  }
  to[x].push_back(y);
  to[y].push_back(x);

  vector<int> ans(n);
  rep(i, n) {
    // BFS
    queue<int> q;
    q.push(i);
    vector<int> dist(n, INF);
    while (!q.empty()) {
      int v = q.front();
      q.pop();
      dist[i] = 0;
      for (int u : to[v]) {
        if (dist[u] != INF) continue;
        int d = dist[v] + 1;
        dist[u] = d;
        ans[d]++;
        q.push(u);
      }
    }
  }
  srep(i, 1, n) ans[i] /= 2;
  srep(i, 1, n) cout << ans[i] << endl;
  return 0;
}
