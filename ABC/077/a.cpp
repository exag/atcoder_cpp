#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s1, s2;
  cin >> s1 >> s2;
  if (s1[0] == s2[2] && s1[2] == s2[0] && s1[1] == s2[1])
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
