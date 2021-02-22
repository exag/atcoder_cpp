#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  int l = s.size();
  string ans = "Yes";
  rep(i, l) {
    char c = s[i];
    if (i % 2 == 0) {
      if (!islower(c)) ans = "No";
    } else {
      if (!isupper(c)) ans = "No";
    }
  }
  cout << ans << endl;
  return 0;
}
