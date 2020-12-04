#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int solve() {
  int n;
  cin >> n;
  int ans = 0;
  vector<int> a(n);
  rep(i, n) {
    int ai;
    cin >> ai;
    ans += ai;
    a[i] = ai;
  }
  sort(a.begin(), a.end());
  if (ans % 10 != 0) {
    return ans;
  }
  rep(i, n) {
    if (a[i] % 10 != 0) {
      ans -= a[i];
      return ans;
    }
  }
  return 0;
}

int main() {
  cout << solve() << endl;
  return 0;
}
