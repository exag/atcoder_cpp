#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string a, b;
  cin >> a >> b;
  string s = a + b;
  int n = stoi(s);
  int p = 1;
  string ans = "No";
  while (p * p <= n) {
    if (p * p == n) ans = "Yes";
    p++;
  }
  cout << ans << endl;
  return 0;
}
