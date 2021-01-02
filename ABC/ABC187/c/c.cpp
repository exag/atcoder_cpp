#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s[i];
  map<string, int> mp1;
  map<string, int> mp2;
  rep(i, n) {
    string si = s[i];
    if (s[i][0] == '!') {
      si = si.substr(1);
      mp1[si]++;
    } else {
      mp2[si]++;
    }
  };
  for (auto p : mp1) {
    if (mp2[p.first]) {
      cout << p.first << endl;
      return 0;
    }
  }
  cout << "satisfiable" << endl;
  return 0;
}
