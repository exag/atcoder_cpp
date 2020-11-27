#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  vector<char> c;
  rep(i, s.size()) {
    char ci = s[i];
    if (ci == 'B') {
      if (c.size() > 0) c.pop_back();
    } else {
      c.push_back(ci);
    }
  }
  for (char ci : c) cout << ci;
  cout << endl;
  return 0;
}
