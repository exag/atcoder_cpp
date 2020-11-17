#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int m, d;
  cin >> m >> d;
  if (m % d == 0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
