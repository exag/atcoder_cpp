#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b;
  cin >> a >> b;
  string s;
  cin >> s;
  auto ok = [&](char x) {
    if ('0' <= x && x <= '9')
      return true;
    else
      return false;
  };
  string ans = "Yes";
  for (int i = 0; i < a; ++i) {
    if (!ok(s[i])) ans = "No";
  }
  if (s[a] != '-') ans = "No";
  for (int i = a + 1; i < a + b; ++i) {
    if (!ok(s[i])) ans = "No";
  }
  cout << ans << endl;
  return 0;
}
