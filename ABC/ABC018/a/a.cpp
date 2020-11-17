#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  vector<int> n(3);
  int mn = 101;
  int mx = 0;
  rep(i, 3) {
    cin >> n[i];
    mx = max(mx, n[i]);
    mn = min(mn, n[i]);
  }
  rep(i, 3) {
    if (n[i] == mx)
      cout << 1 << endl;
    else if (n[i] == mn)
      cout << 3 << endl;
    else
      cout << 2 << endl;
  }

  return 0;
}
