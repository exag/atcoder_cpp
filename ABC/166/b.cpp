#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k;
  cin >> n >> k;
  set<int> s;
  rep(i, n) s.insert(i + 1);
  rep(i, k) {
    int d;
    cin >> d;
    rep(i, d) {
      int a;
      cin >> a;
      s.erase(a);
    }
  }
  cout << s.size() << endl;
  return 0;
}
