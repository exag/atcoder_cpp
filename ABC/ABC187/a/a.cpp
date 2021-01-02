#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string sa, sb;
  cin >> sa >> sb;
  int a = (sa[0] - '0') + (sa[1] - '0') + (sa[2] - '0');
  int b = (sb[0] - '0') + (sb[1] - '0') + (sb[2] - '0');
  cout << max(a, b) << endl;
  return 0;
}
