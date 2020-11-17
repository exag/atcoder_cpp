#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string a, b;
  cin >> a >> b;
  string ans;
  if (a == "H" && b == "H") ans = "H";
  if (a == "D" && b == "H") ans = "D";
  if (a == "H" && b == "D") ans = "D";
  if (a == "D" && b == "D") ans = "H";
  cout << ans << endl;
  return 0;
}
