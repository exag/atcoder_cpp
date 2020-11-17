#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int ans = 0;
  char c;
  rep(i, s.size()) {
    if (s[i] != c) {
      ans++;
      c = s[i];
    }
  }
  cout << ans << endl;
  return 0;
}
