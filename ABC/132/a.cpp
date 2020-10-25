#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  vector<char> cs = {s[0], s[1], s[2], s[3]};
  sort(cs.begin(), cs.end());
  if (cs[0] == cs[1] && cs[1] != cs[2] && cs[2] == cs[3])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
