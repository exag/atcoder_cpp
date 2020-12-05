#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m;
  cin >> n >> m;
  map<int, int> ma;
  map<int, int> mb;
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    if (a == 1) ma[b]++;
    if (b == n) mb[a]++;
  }
  string ans = "IMPOSSIBLE";
  rep(i, n + 1) {
    if (ma[i] > 0 && mb[i] > 0) ans = "POSSIBLE";
  }
  cout << ans << endl;
  return 0;
}
