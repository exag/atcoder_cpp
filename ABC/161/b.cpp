#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> v;
  int sm = 0;
  rep(i, n) {
    int a;
    cin >> a;
    v.push_back(a);
    sm += a;
  }
  int cnt = 0;
  rep(i, n) {
    if (v[i] * 4 * m < sm) continue;
    cnt++;
  }
  if (cnt >= m)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
