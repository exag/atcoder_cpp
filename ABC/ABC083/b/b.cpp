#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int ans = 0;
  for (int i = 1; i <= n; ++i) {
    string s = to_string(i);
    int sm = 0;
    for (char c : s) sm += c - '0';
    if (a <= sm && sm <= b) ans += i;
  }
  cout << ans << endl;
  return 0;
}
