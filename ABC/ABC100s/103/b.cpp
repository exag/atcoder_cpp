#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s, t;
  cin >> s >> t;
  int len = s.size();
  auto same = [&]() {
    rep(i, len) {
      if (s[i] != t[i]) return false;
    }
    return true;
  };
  int i = 0;
  while (i < len) {
    if (same()) {
      cout << "Yes" << endl;
      return 0;
    }
    t.push_back(t[0]);
    t.erase(0, 1);
    i++;
  }
  cout << "No" << endl;
  return 0;
}
