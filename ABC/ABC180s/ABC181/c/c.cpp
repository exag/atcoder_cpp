#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> x(n);
  vector<int> y(n);
  rep(i, n) { cin >> x[i] >> y[i]; }
  for (int i = 0; i < (n); ++i) {
    for (int j = i; j < (n); ++j) {
      for (int k = j; k < (n); ++k) {
        if (i == j) continue;
        if (j == k) continue;
        if ((y[i] - y[j]) * (x[j] - x[k]) == (y[j] - y[k]) * (x[i] - x[j])) {
          puts("Yes");
          return 0;
        }
      }
    }
  }
  puts("No");
  return 0;
}
