#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  double r;
  rep(i, n) {
    int a;
    cin >> a;
    r += (double)1 / a;
  }
  cout << 1 / r << endl;
  return 0;
}
