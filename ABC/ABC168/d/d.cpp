#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const int INF = 1001001001;
vector<int> to[100005];

int main() {
  int n, m;
  cin >> n >> m;
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    to[a].push_back(b);
    to[b].push_back(a);
  }
  // BFS
  queue<int> q;
  vector<int> dist(n, INF);
  vector<int> pre(n, -1);
  dist[0] = 0;
  q.push(0);
  while (!q.empty()) {
    int v = q.front();
    q.pop();
    for (int u : to[v]) {
      if (dist[u] != INF) continue;
      dist[u] = dist[v] + 1;
      pre[u] = v;
      q.push(u);
    }
  }
  cout << "Yes" << endl;
  rep(i, n) {
    if (i == 0) continue;
    int ans = pre[i];
    ans++;
    cout << ans << endl;
  }
  return 0;
}
