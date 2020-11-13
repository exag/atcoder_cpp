#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  int n;
  cin >> s >> n;
  int ind = 1;
  rep(i, 5) rep(j, 5) {
    if (ind == n) {
      cout << s[i] << s[j] << endl;
      return 0;
    }
    ind++;
  }
  return 0;
}
