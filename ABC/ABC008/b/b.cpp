#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  map<string, int> mp;
  rep(i, n) {
    string s;
    cin >> s;
    mp[s]++;
  }
  int mx = 0;
  string ans;
  for (auto m : mp) {
    if (m.second > mx) {
      mx = m.second;
      ans = m.first;
    }
  }
  cout << ans << endl;
  return 0;
}
