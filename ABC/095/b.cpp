#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> m(n);
  rep(i, n) {
    int mi;
    cin >> mi;
    x -= mi;
    m[i] = mi;
  }
  sort(m.begin(), m.end());
  cout << n + x / m[0] << endl;
  return 0;
}
