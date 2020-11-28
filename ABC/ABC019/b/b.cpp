#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  char nc = s[0];
  int cnt = 1;
  rep(i, s.size()) {
    if (nc == s[i]) {
      cnt++;
    } else {
      cout << nc << cnt;
      nc = s[i];
      cnt = 1;
    }
  }
  cout << nc << cnt;
  cout << endl;
  return 0;
}
