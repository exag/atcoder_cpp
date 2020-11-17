#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  string s = to_string(n);
  int sm = 0;
  rep(i, s.size()) sm += s[i] - '0';
  if (n % sm == 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
