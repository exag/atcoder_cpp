#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  char before;
  int ans = -1;
  rep(i, s.size()) {
    char c = s[i];
    if (before != c) {
      ans++;
      before = c;
    }
  }
  cout << ans << endl;
  return 0;
}
