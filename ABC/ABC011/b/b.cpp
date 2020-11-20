#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  rep(i, s.size()) {
    if (i == 0) {
      if (islower(s[i])) s[i] = toupper(s[i]);
    } else {
      if (isupper(s[i])) s[i] = tolower(s[i]);
    }
  }
  cout << s << endl;
  return 0;
}
