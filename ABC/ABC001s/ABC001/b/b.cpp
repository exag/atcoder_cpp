#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int m;
  cin >> m;
  int n;
  if (m < 100)
    n = 0;
  else if (m <= 5000)
    n = m / 100;
  else if (m <= 30000)
    n = m / 1000 + 50;
  else if (m <= 70000)
    n = (m / 1000 - 30) / 5 + 80;
  else
    n = 89;
  string ans = to_string(n);
  if (ans.size() == 1) ans = "0" + ans;
  cout << ans << endl;
  return 0;
}
