#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k;
  string s;
  cin >> n >> k >> s;
  string ans;
  s[k - 1] = s[k - 1] - 'A' + 'a';
  cout << s << endl;
  return 0;
}
