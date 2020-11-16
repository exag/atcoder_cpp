#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  int q = (n + (1000 - 1)) / 1000;
  int ans = q * 1000 - n;
  cout << ans << endl;
  return 0;
}
