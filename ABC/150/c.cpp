#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> p(n);
  vector<int> q(n);
  rep(i, n) cin >> p[i];
  rep(i, n) cin >> q[i];
  vector<int> v(n);
  rep(i, n) v[i] = i + 1;
  int a, b;
  int i = 1;
  do {
    if (v == p) a = i;
    if (v == q) b = i;
    i++;
  } while (next_permutation(v.begin(), v.end()));
  cout << abs(a - b) << endl;
  return 0;
}
