#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  string ans = "NO";
  if (a == 5 && b == 5 && c == 7) ans = "YES";
  if (a == 5 && b == 7 && c == 5) ans = "YES";
  if (a == 7 && b == 5 && c == 5) ans = "YES";
  cout << ans << endl;
  return 0;
}
