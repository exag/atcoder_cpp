#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a;
  cin >> a;
  int ans;
  if (a % 2 == 0)
    ans = (a / 2) * (a / 2);
  else
    ans = (a / 2) * (a / 2 + 1);
  cout << ans << endl;
  return 0;
}
