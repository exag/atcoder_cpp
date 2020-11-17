#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, d;
  cin >> a >> d;
  cout << max((a + 1) * d, a * (d + 1)) << endl;
  return 0;
}
