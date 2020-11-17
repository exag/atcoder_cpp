#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string a, b, c;
  cin >> a >> b >> c;
  string ans = "NO";
  if (a.back() == b.front() && b.back() == c.front()) ans = "YES";
  cout << ans << endl;
  return 0;
}
