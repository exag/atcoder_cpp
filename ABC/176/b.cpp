#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  int sum = 0;
  rep(i, s.size()) { sum += int(s[i]) - 48; }
  if (sum % 9 == 0)
    puts("Yes");
  else
    puts("No");
  return 0;
}
