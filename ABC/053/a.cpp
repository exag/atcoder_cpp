#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int x;
  cin >> x;
  string ans = "ARC";
  if (x < 1200) ans = "ABC";
  cout << ans << endl;
  return 0;
}
