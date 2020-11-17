#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  rep(i, s.size()) {
    if (i % 2 == 1) {
      if (s[i] == 'R') {
        puts("No");
        return 0;
      }
    } else {
      if (s[i] == 'L') {
        puts("No");
        return 0;
      }
    }
  }
  puts("Yes");
  return 0;
}
