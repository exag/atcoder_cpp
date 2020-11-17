#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b;
  cin >> a >> b;
  int d = b - a;
  int t = d * (d + 1) / 2;
  cout << t - b << endl;
  return 0;
}
