#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  if (s[s.size() - 1] == 's')
    cout << s + "es";
  else
    cout << s + "s";
  return 0;
}
