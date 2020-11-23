#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) {
    int ai;
    cin >> ai;
    ai--;
    a[i] = ai;
  }
  int cnt = 1;
  int idx = 0;
  while (cnt <= n) {
    int ai = a[idx];
    if (ai == 1) {
      cout << cnt << endl;
      return 0;
    }
    cnt++;
    idx = ai;
  }
  cout << -1 << endl;
  return 0;
}
