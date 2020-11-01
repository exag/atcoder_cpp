#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b;
  cin >> a >> b;
  string s(b, '0' + a);
  string t(a, '0' + b);
  cout << min(s, t) << endl;
  return 0;
}
