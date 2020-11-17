#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b;
  cin >> a >> b;
  if (a == 1) a = 14;
  if (b == 1) b = 14;
  string ans = "Draw";
  if (a > b) ans = "Alice";
  if (a < b) ans = "Bob";
  cout << ans << endl;
  return 0;
}
