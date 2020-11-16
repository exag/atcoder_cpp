#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  int mx = 0;
  int mn = 1e9;
  rep(i, n) {
    int a;
    cin >> a;
    mx = max(mx, a);
    mn = min(mn, a);
  }
  cout << mx - mn << endl;
  return 0;
}
