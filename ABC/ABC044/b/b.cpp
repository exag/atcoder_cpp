#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string w;
  cin >> w;
  map<char, int> mp;
  for (char c : w) mp[c]++;
  string ans = "Yes";
  for (char c = 'a'; c <= 'x'; ++c) {
    if (mp[c] % 2 != 0) ans = "No";
  }
  cout << ans << endl;
  return 0;
}
