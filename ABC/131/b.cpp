#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, l;
  cin >> n >> l;
  vector<int> a(n);
  rep(i, n) a[i] = i + l;
  int mn = 1e9;
  int sm = accumulate(a.begin(), a.end(), 0);
  rep(i, n) {
    if (abs(a[i]) < abs(mn)) mn = a[i];
  }
  cout << sm - mn << endl;
  return 0;
}
