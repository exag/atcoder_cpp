#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int cnt[200010];

int main() {
  int n, k;
  cin >> n >> k;
  rep(i, n) {
    int a;
    cin >> a;
    cnt[a - 1]++;
  }
  sort(cnt, cnt + n);
  int ans = 0;
  rep(i, n - k) ans += cnt[i];
  cout << ans << endl;
  return 0;
}
