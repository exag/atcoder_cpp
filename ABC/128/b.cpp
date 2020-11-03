#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<tuple<string, int, int>> r;
  rep(i, n) {
    string s;
    int p;
    cin >> s >> p;
    p = -p;
    r.push_back(make_tuple(s, p, i + 1));
  }
  sort(r.begin(), r.end());
  rep(i, n) cout << get<2>(r[i]) << endl;
  return 0;
}
