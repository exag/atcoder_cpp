#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, q;
  string s;
  cin >> n >> q >> s;
  vector<int> cnt(n + 1);
  int now = 0;
  rep(i, n) {
    cnt[i + 1] = cnt[i];
    if (s[i] == 'A' && s[i + 1] == 'C') {
      cnt[i + 1]++;
    }
  }
  rep(i, q) {
    int l, r;
    cin >> l >> r;
    l--;
    r--;
    cout << cnt[r] - cnt[l] << endl;
  }
  return 0;
}
