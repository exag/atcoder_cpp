#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b;
  cin >> a >> b;
  int ans = 0;
  for (int i = a; i <= b; ++i) {
    string s = to_string(i);
    string t = s;
    reverse(t.begin(), t.end());
    if (s == t) ans++;
  }
  cout << ans << endl;
  return 0;
}
