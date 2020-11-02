#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, d;
  cin >> n >> d;
  int r = d * 2 + 1;
  cout << (n + r - 1) / r << endl;
  return 0;
}
