#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int r, g, b;
  cin >> r >> g >> b;
  int n = r * 100 + g * 10 + b;
  if (n % 4 == 0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
