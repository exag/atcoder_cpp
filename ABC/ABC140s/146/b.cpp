#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  string s;
  cin >> n >> s;
  rep(i, s.size()) {
    char c = s[i];
    c += n;
    if (c > 'Z') c -= 26;
    s[i] = c;
  }
  cout << s << endl;
  return 0;
}
