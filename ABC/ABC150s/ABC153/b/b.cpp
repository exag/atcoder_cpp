#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, n;
  cin >> h >> n;
  int attack = 0;
  rep(i, n) {
    int a;
    cin >> a;
    attack += a;
  }
  if (attack >= h)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
