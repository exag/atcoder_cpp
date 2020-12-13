#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  int n2 = 0;
  int n4 = 0;
  rep(i, n) {
    int ai;
    cin >> ai;
    if (ai % 2 == 0 && ai % 4 != 0) n2++;
    if (ai % 4 == 0) n4++;
  }
  string ans = "No";
  if (n - n4 * 2 <= 1) ans = "Yes";
  if (n - n4 * 2 == n2) ans = "Yes";
  cout << ans << endl;
  return 0;
}
