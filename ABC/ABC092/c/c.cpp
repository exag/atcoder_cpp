#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> a;
  a.push_back(0);
  rep(i, n) {
    int ai;
    cin >> ai;
    a.push_back(ai);
  }
  a.push_back(0);
  int d = 0;
  rep(i, n + 1) d += abs(a[i + 1] - a[i]);
  srep(i, 1, n + 1) {
    int ans = d;
    ans -= abs(a[i] - a[i + 1]);
    ans -= abs(a[i] - a[i - 1]);
    ans += abs(a[i - 1] - a[i + 1]);
    cout << ans << endl;
  }
  return 0;
}
