#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  string s;
  cin >> s;
  int x;
  string op;
  int ans = 0;
  rep(i,s.size()) {
    if (i%2==0) {
      x = int(s.at(i)) - int('0');
      if (i==0) ans = x;
    } else {
      op = s.at(i);
      if (op=="+") {
        ans += x;
      } else {
        ans -= x;
      }
    }
  }
  cout << ans << endl;
}
