#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b, k;
  cin >> a >> b >> k;
  int cnt = 0;
  for (int n = 100; n > 0; --n) {
    if (a % n == 0 && b % n == 0) {
      cnt++;
      if (cnt == k) cout << n << endl;
    }
  }
  return 0;
}
