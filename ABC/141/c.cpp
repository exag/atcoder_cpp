#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k, q;
  cin >> n >> k >> q;
  map<int, int> p;
  rep(i, q) {
    int a;
    cin >> a;
    a--;
    p[a]++;
  }
  rep(i, n) {
    if (k - q + p[i] > 0)
      puts("Yes");
    else
      puts("No");
  }
  return 0;
}
