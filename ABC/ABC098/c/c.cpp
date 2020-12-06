#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  string s;
  cin >> n >> s;
  vector<char> d(n);
  rep(i, n) d[i] = s[i];
  vector<int> west(n + 1);
  vector<int> east(n + 1);
  west[0] = 0;
  east[0] = 0;
  rep(i, n) {
    west[i + 1] = west[i];
    east[i + 1] = east[i];
    if (d[i] == 'W') west[i + 1]++;
    if (d[i] == 'E') east[i + 1]++;
  }
  int allE = east[n];
  int ans = 10000000;
  rep(i, n + 1) {
    int cntW = west[i];
    int cntE = allE - east[i];
    ans = min(ans, abs(cntW + cntE));
  }
  cout << ans << endl;
  return 0;
}
