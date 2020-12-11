#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  ll now = 1;
  vector<ll> nums;
  rep(i, s.size()) {
    if (i % 2 == 0) {
      now *= s[i] - '0';
      if (now) now = 1;
    } else {
      if (s[i] == '+') {
        nums.push_back(now);
        now = 1;
      }
    }
  }
  nums.push_back(now);
  int ans = 0;
  for (int num : nums) {
    if (num) ans++;
  }
  cout << ans << endl;
  return 0;
}
