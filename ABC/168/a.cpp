#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  int d = n % 10;
  string ans = "";
  if (d == 2 || d == 4 || d == 5 || d == 7 || d == 9) ans = "hon";
  if (d == 0 || d == 1 || d == 6 || d == 8) ans = "pon";
  if (d == 3) ans = "bon";
  cout << ans << endl;
  return 0;
}
