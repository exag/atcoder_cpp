#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  set<int> p;
  p.insert(a);
  p.insert(b);
  p.insert(c);
  cout << p.size() << endl;
  return 0;
}
