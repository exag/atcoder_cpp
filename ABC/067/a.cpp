#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b;
  cin >> a >> b;
  string ans = "Impossible";
  if (a % 3 == 0) ans = "Possible";
  if (b % 3 == 0) ans = "Possible";
  if ((a + b) % 3 == 0) ans = "Possible";
  cout << ans << endl;
  return 0;
}
