#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int k;
  cin >> k;
  if (k % 2 == 0)
    cout << (k / 2) * (k / 2) << endl;
  else
    cout << (k / 2) * (k / 2 + 1) << endl;
  return 0;
}
