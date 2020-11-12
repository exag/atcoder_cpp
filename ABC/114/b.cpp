#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  int ans = 1000;
  rep(i, s.size() - 2) {
    int n = stoi(s.substr(i, 3));
    ans = min(ans, abs(n - 753));
  }
  cout << ans << endl;
  return 0;
}
