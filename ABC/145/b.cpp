#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  string s;
  cin >> n >> s;
  if (n % 2 != 0) {
    puts("No");
    return 0;
  }
  string a, b;
  a = s.substr(0, s.size() / 2);
  b = s.substr(s.size() / 2);
  if (a == b)
    puts("Yes");
  else
    puts("No");
  return 0;
}
