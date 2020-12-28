#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
template <class T>
void chmax(T& a, T b) {
  if (a < b) a = b;
}
template <class T>
void chmin(T& a, T b) {
  if (a > b) a = b;
}

int main() {
  int n;
  cin >> n;
  vector<int> L(n);
  rep(i, n) cin >> L[i];
  sort(L.begin(), L.end());
  int ans = 0;
  rep(b, n) rep(a, b) {
    int ab = L[a] + L[b];
    int r = lower_bound(L.begin(), L.end(), ab) - L.begin();
    int l = b + 1;
    ans += r - l;
  }
  cout << ans << endl;
  return 0;
}
