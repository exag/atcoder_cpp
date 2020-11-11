#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  int sm = 0;
  int mx = 0;
  rep(i, n) {
    int l;
    cin >> l;
    sm += l;
    mx = max(mx, l);
  }
  if (mx * 2 < sm)
    puts("Yes");
  else
    puts("No");
  return 0;
}
