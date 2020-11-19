#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string a, b;
  cin >> a >> b;
  int la = a.size();
  int lb = b.size();
  if (la > lb) {
    cout << "GREATER" << endl;
    return 0;
  }
  if (la < lb) {
    cout << "LESS" << endl;
    return 0;
  }
  rep(i, la) {
    if (a[i] > b[i]) {
      cout << "GREATER" << endl;
      return 0;
    }
    if (a[i] < b[i]) {
      cout << "LESS" << endl;
      return 0;
    }
  }
  cout << "EQUAL" << endl;
  return 0;
}
