#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  map<char, int> mp;
  rep(i, s.size()) mp[s[i]]++;
  for (char c = 'a'; c <= 'z'; c++) {
    if (mp[c] == 0) {
      cout << c << endl;
      return 0;
    }
  }
  cout << "None" << endl;
  return 0;
}
