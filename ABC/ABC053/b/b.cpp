#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  int st = -1;
  int ed = 0;
  rep(i, s.size()) {
    if (s[i] == 'A' && st == -1) st = i;
    if (s[i] == 'Z') ed = i;
  }
  cout << ed - st + 1 << endl;
  return 0;
}
