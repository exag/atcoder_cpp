#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int ans = 0;
  rep(i, 12) {
    string s;
    cin >> s;
    if (s.find("r") != string::npos) ans++;
  }
  cout << ans << endl;
  return 0;
}
