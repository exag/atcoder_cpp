#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

char solve() {
  string s;
  ll k;
  cin >> s >> k;
  char ans;
  if (k == 1) return s[0];
  int not1 = -1;
  rep(i, s.size()) {
    if (s[i] != '1') {
      not1 = i;
      break;
    }
  }
  if (not1 == -1) return s[0];
  if (not1 + 1 > k) return '1';
  return s[not1];
}

int main() { cout << solve() << endl; }
