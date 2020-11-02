#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> p(n);
  rep(i, n) cin >> p[i];
  vector<int> r = p;
  sort(r.begin(), r.end());
  int cnt = 0;
  rep(i, n) {
    if (p[i] != r[i]) cnt++;
  }
  if (cnt <= 2)
    puts("YES");
  else
    puts("NO");
  return 0;
}
