#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, x, t;
  cin >> n >> x >> t;
  int c = (n + (x - 1)) / x;
  cout << c * t << endl;
  return 0;
}
