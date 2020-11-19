#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  int ans;
  if (n % 2 == 0)
    ans = n - 1;
  else
    ans = n + 1;
  cout << ans << endl;
  return 0;
}
