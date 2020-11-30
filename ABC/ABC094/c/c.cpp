#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> x(n);
  vector<int> x2(n);
  rep(i, n) {
    int xi;
    cin >> xi;
    x[i] = xi;
    x2[i] = xi;
  }
  sort(x2.begin(), x2.end());
  int ml = x2[n / 2 - 1];
  int mr = x2[n / 2];
  int mm = ml + mr;
  rep(i, n) {
    if (x[i] * 2 <= mm)
      cout << mr << endl;
    else
      cout << ml << endl;
  }
  return 0;
}
