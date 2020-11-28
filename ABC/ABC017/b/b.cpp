#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string x;
  cin >> x;
  x = regex_replace(x, regex("ch"), "");
  x = regex_replace(x, regex("o"), "");
  x = regex_replace(x, regex("k"), "");
  x = regex_replace(x, regex("u"), "");
  if (x == "")
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
