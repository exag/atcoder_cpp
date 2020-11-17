#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> h(n);
  rep(i, n) cin >> h[i];
  int now = h[0];
  rep(i, n - 1) {
    if (h[i] > h[i + 1]) {
      puts("No");
      return 0;
    }
    if (h[i] < h[i + 1]) h[i + 1]--;
  }
  puts("Yes");
  return 0;
}
