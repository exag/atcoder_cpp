#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int check7(int n, int t) {
  while (n) {
    int m = n % t;
    if (m == 7) return false;
  }
  return true;
}

int main() {
  int n, w;
  cin >> n >> w;
  int ans = 0;
  srep(i, 1, n + 1) {
    if (check7(i, 10) && check7(i, 8)) ans++;
  }
  cout << ans << endl;
  return 0;
}
