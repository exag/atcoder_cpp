#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  vector<int> n(3);
  int k;
  cin >> n[0] >> n[1] >> n[2] >> k;
  sort(n.begin(), n.end());
  rep(i, k) n[2] *= 2;
  cout << n[0] + n[1] + n[2] << endl;
  return 0;
}
