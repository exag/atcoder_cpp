#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m, x, y;
  cin >> n >> m >> x >> y;
  vector<int> da(n), db(m);
  rep(i, n) cin >> da[i];
  rep(i, m) cin >> db[i];
  sort(da.rbegin(), da.rend());
  sort(db.begin(), db.end());
  for (int z = -100; z <= 100; ++z) {
    if (x < z && z <= y && da[0] < z && z <= db[0]) {
      cout << "No War" << endl;
      return 0;
    }
  }
  cout << "War" << endl;
  return 0;
}
