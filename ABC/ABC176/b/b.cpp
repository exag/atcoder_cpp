#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  int x = 0;
  for (char c : s) {
    x += (c - '0');
  }
  x %= 9;
  if (x == 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
