#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, x;
  string s;
  cin >> n >> x >> s;
  int ans = x;
  rep(i, n) {
    if (s[i] == 'o')
      ans++;
    else
      ans = max(0, ans - 1);
  }
  cout << ans << endl;
  return 0;
}
