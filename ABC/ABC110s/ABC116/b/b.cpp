#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  auto f = [&](int x) {
    if (x % 2 == 0)
      return x / 2;
    else
      return 3 * x + 1;
  };
  map<int, int> mp;
  mp[n]++;
  int i = 2;
  while (i <= 1000000) {
    n = f(n);
    if (mp[n] > 0) {
      cout << i << endl;
      return 0;
    } else {
      mp[n]++;
    }
    i++;
  }
  return 0;
}
