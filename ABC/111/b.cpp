#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  for (int x = 111; x <= 999; x += 111) {
    if (x >= n) {
      cout << x << endl;
      return 0;
    }
  }
  return 0;
}
