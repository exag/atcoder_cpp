#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  int sn = 0;
  rep(i, s.size()) { sn += s[i] - '0'; }
  int n = stoi(s);
  if (n % sn == 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
