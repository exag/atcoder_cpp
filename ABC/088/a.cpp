#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, a;
  cin >> n >> a;
  n -= (n / 500) * 500;
  if (a >= n)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
