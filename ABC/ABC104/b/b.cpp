#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  if (s[0] != 'A') {
    cout << "WA" << endl;
    return 0;
  }
  int cnt = 0;
  rep(i, s.size()) {
    if (i <= 1 || i == s.size() - 1) continue;
    if (s[i] == 'C') cnt++;
  }
  if (cnt != 1) {
    cout << "WA" << endl;
    return 0;
  }
  rep(i, s.size()) {
    if (s[i] == 'A' || s[i] == 'C') continue;
    if (isupper(s[i])) {
      cout << "WA" << endl;
      return 0;
    }
  }
  cout << "AC" << endl;
  return 0;
}
