#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  s.pop_back();
  if (s.size() % 2 != 0) s.pop_back();
  while (true) {
    if (s.substr(0, s.size() / 2) == s.substr(s.size() / 2)) {
      cout << s.size() << endl;
      break;
    }
    s.pop_back();
    s.pop_back();
  }
  return 0;
}
