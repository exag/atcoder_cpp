#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int solve() {
  int n, m;
  cin >> n >> m;
  if (n < 3 && m < 3) return 0;
  return max(n - 2, 1) * max(m - 2, 1);
}

int main() {
  cout << solve() << endl;
  return 0;
}
