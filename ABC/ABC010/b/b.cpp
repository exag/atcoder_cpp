#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

bool ok(int n) {
  if (n % 2 == 0) return false;
  if ((n + 1) % 6 == 0) return false;
  return true;
}

int main() {
  int n;
  cin >> n;
  int ans = 0;
  rep(i, n) {
    int a;
    cin >> a;
    for (int i = a; i > 0; --i) {
      if (ok(i)) break;
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
