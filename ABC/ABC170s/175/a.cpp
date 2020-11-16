#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  int ans = 0;
  if (s.find("RRR") != string::npos) {
    ans = 3;
  } else if (s.find("RR") != string::npos) {
    ans = 2;
  } else if (s.find("R") != string::npos) {
    ans = 1;
  }
  cout << ans << endl;
  return 0;
}
