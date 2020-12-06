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
    int ai;
    cin >> ai;
    P p = make_pair(ai, i + 1);
    a[i] = p;
  }
  sort(a.rbegin(), a.rend());
  rep(i, n) cout << a[i].second << endl;
  return 0;
}
