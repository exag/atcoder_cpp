#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int g1(int x) {
  string s = to_string(x);
  sort(s.rbegin(), s.rend());
  return stoi(s);
}

int g2(int x) {
  string s = to_string(x);
  sort(s.begin(), s.end());
  return stoi(s);
}

int f(int x) { return g1(x) - g2(x); }

int main() {
  int n, k;
  cin >> n >> k;
  rep(i, k) { n = f(n); }
  cout << n << endl;
  return 0;
}
