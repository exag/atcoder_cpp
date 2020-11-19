#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> t(n);
  rep(i, n) cin >> t[i];
  int m;
  cin >> m;
  rep(i, m) {
    int p, x;
    cin >> p >> x;
    p--;
    int time = 0;
    rep(j, n) {
      time += t[j];
      if (j == p) {
        time -= t[j];
        time += x;
      }
    }
    cout << time << endl;
  }
  return 0;
}
