#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

string solve() {
  string s, t;
  cin >> s >> t;
  rep(i, s.size()) {
    char si = s[i];
    char ti = t[i];
    if (si == ti) continue;
    if (si == '@' && ti == '@') continue;
    if (si != '@' && ti != '@') return "You will lose";
    if (si == '@') {
      if (ti != 'a' && ti != 't' && ti != 'c' && ti != 'o' && ti != 'd' &&
          ti != 'e' && ti != 'r') {
        return "You will lose";
      }
    }
    if (ti == '@') {
      if (si != 'a' && si != 't' && si != 'c' && si != 'o' && si != 'd' &&
          si != 'e' && si != 'r') {
        return "You will lose";
      }
    }
  }
  return "You can win";
}

int main() {
  cout << solve() << endl;
  return 0;
}
