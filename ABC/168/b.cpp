#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int k;
  string s;
  cin >> k >> s;
  string ans = s;
  if (s.length() > k) ans = s.substr(0, k) + "...";
  cout << ans << endl;
  return 0;
}
