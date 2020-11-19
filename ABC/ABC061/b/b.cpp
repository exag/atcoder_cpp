#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> t(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    t[a]++;
    t[b]++;
  }
  rep(i, n) cout << t[i] << endl;
  return 0;
}
