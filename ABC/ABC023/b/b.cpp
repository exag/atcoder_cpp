#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  string s;
  cin >> n >> s;
  string a;
  int ans = -1;
  rep(i, 50) {
    if (i == 0) {
      a = "b";
    } else {
      if (i % 3 == 1) a = "a" + a + "c";
      if (i % 3 == 2) a = "c" + a + "a";
      if (i % 3 == 0) a = "b" + a + "b";
    }
    if (a == s) {
      ans = i;
    }
  }
  cout << ans << endl;
  return 0;
}
