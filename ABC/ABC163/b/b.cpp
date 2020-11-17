#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m;
  cin >> n >> m;
  int sm = 0;
  vector<int> hw;
  rep(i, m) {
    int a;
    cin >> a;
    sm += a;
  }
  if (n >= sm) {
    cout << n - sm << endl;
  } else {
    cout << -1 << endl;
  }
  return 0;
}
