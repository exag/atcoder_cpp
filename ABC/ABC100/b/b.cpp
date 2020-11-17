#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int d, n;
  cin >> d >> n;
  if (n == 100) n = 101;
  if (d == 0) {
    cout << n << endl;
  } else if (d == 1) {
    cout << n * 100 << endl;
  } else {
    cout << n * 10000 << endl;
  }
  return 0;
}
