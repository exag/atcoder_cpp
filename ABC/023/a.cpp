#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int x;
  cin >> x;
  int d1 = x % 10;
  x /= 10;
  int d2 = x % 10;
  cout << d1 + d2 << endl;
  return 0;
}
