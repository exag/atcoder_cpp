#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<P> a(n);
  rep(i, n) {
    ll ai;
    cin >> ai;
    a[i] = make_pair(ai, i);
  }
  sort(a.rbegin(), a.rend());
  rep(i, n) {
    if (a[0].second == i)
      cout << a[1].first << endl;
    else
      cout << a[0].first << endl;
  }
  return 0;
}
