#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  while (true) {
    int t = n;
    int d1 = t % 10;
    t /= 10;
    int d2 = t % 10;
    t /= 10;
    int d3 = t % 10;
    if (d1 == d2 && d2 == d3) {
      cout << n << endl;
      return 0;
    }
    n++;
  }
  return 0;
}
