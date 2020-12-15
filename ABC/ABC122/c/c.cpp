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
  vector<int> cnt(n);
  int now = 0;
  srep(i, 1, n) {
    if (s[i - 1] == 'A' && s[i] == 'C') {
      now++;
    }
    cnt[i] = now;
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
