#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int f(int n) {
  int ans = 0;
  while (true) {
    if (n % 2 != 0) break;
    ans++;
    n /= 2;
  }
  return ans;
}

int main() {
  int n;
  cin >> n;
  int ans = 0;
  rep(i, n) {
    int a;
    cin >> a;
    ans += f(a);
  }
  cout << ans << endl;
  return 0;
}
