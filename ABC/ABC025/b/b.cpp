#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int x = n;
  string dir;
  rep(i, n) {
    string s;
    int d;
    cin >> s >> d;
    if (d < a)
      d = a;
    else if (d > b)
      d = b;
    if (s == "East")
      x += d;
    else
      x -= d;
    dir = s;
  }
  if (x == n) {
    cout << 0 << endl;
    return 0;
  }
  if (x > n) {
    cout << "East"
         << " " << x - n << endl;
  } else {
    cout << "West"
         << " " << n - x << endl;
  }
  return 0;
}
