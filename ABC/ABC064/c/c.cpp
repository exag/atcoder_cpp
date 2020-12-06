#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> cnt(9);
  rep(i, n) {
    int a;
    cin >> a;
    if (a < 400)
      cnt[0]++;
    else if (a < 800)
      cnt[1]++;
    else if (a < 1200)
      cnt[2]++;
    else if (a < 1600)
      cnt[3]++;
    else if (a < 2000)
      cnt[4]++;
    else if (a < 2400)
      cnt[5]++;
    else if (a < 2800)
      cnt[6]++;
    else if (a < 3200)
      cnt[7]++;
    else
      cnt[8]++;
  }
  int ans = 0;
  rep(i, 8) {
    if (cnt[i] > 0) ans++;
  }
  if (ans == 0) {
    cnt[8]--;
    ans++;
  }
  cout << ans << " " << ans + cnt[8] << endl;
  return 0;
}
