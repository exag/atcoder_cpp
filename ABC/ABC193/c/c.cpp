#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n;
  cin >> n;
  int x = sqrt(n) + 1;
  set<ll> st;
  srep(a, 2, x + 1) {
    srep(b, 2, x + 1) {
      ll x = pow(a, b);
      if (x > n) break;
      st.insert(x);
    }
  }
  cout << n - st.size() << endl;
  return 0;
}
