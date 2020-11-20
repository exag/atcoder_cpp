#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> p(n);
  rep(i, n) cin >> p[i];
  sort(p.rbegin(), p.rend());
  rep(i, n) {
    if (p[i] != p[0]) {
      cout << p[i] << endl;
      break;
    }
  }
}
