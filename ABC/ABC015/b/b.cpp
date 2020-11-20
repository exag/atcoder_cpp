#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  int cnt = 0;
  int sm = 0;
  rep(i, n) {
    int a;
    cin >> a;
    if (a == 0) continue;
    cnt++;
    sm += a;
  }
  int ans = (sm + cnt - 1) / cnt;
  cout << ans << endl;
  return 0;
}
