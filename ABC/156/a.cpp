#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, r;
  cin >> n >> r;
  if (n >= 10)
    cout << r << endl;
  else
    cout << r + 100 * (10 - n) << endl;
  return 0;
}
