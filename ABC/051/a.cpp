#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  rep(i, s.size()) {
    if (s[i] == ',') s[i] = ' ';
  }
  cout << s << endl;
  return 0;
}
