#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string sa, sb, sc;
  map<char, string> mp;
  cin >> mp['a'] >> mp['b'] >> mp['c'];
  char t = 'a';
  while (true) {
    if (mp[t].size() == 0) {
      cout << (char)toupper(t) << endl;
      return 0;
    }
    char nt = mp[t][0];
    mp[t].erase(0, 1);
    t = nt;
  }
  return 0;
}
