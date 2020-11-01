#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  rep(i, n) {
    string s = to_string(i + 1);
    if (s.size() % 2 == 1) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
