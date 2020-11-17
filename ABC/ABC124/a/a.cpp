#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b;
  cin >> a >> b;
  int ans;
  if (a == b)
    ans = a * 2;
  else
    ans = max(a, b) * 2 - 1;
  cout << ans << endl;
  return 0;
}
