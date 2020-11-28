#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  int sm = 0;
  vector<int> a(n);
  rep(i, n) {
    cin >> a[i];
    sm += a[i];
  }
  if (sm % n != 0) {
    cout << -1 << endl;
    return 0;
  }
  int av = sm / n;
  int tmp = 0;
  int cnt = 0;
  int ans = 0;
  rep(i, n) {
    tmp += a[i];
    cnt++;
    if (tmp == av * cnt) {
      ans += cnt - 1;
      tmp = 0;
      cnt = 0;
    }
  }
  cout << ans << endl;
  return 0;
}
