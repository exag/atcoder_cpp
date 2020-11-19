#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  int mx = 0;
  int sm = 0;
  string name;
  rep(i, n) {
    string s;
    int p;
    cin >> s >> p;
    sm += p;
    if (p > mx) {
      mx = p;
      name = s;
    }
  }
  if (mx * 2 > sm)
    cout << name << endl;
  else
    cout << "atcoder" << endl;
  return 0;
}
