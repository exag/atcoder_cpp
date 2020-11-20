#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  rep(i, s.size()) {
    char c = s[i];
    if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') continue;
    cout << c;
  }
  cout << endl;
  return 0;
}
