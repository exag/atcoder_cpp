#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n;
  cin >> n;
  set<ll> s;
  for (int i = 1; i < sqrt(n) + 1; ++i) {
    if (n % i == 0) {
      s.insert(i);
      s.insert(n / i);
    }
  }
  vector<ll> v(s.begin(), s.end());
  for (ll d : v) {
    cout << d << endl;
  }
  return 0;
}
