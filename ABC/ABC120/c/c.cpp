#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  int a = 0;
  int b = 0;
  rep(i, s.size()) {
    if (s[i] == '0') a++;
    if (s[i] == '1') b++;
  }
  cout << min(a, b) * 2 << endl;
  return 0;
}
