#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  set<string> s;
  rep(i, n) {
    string si;
    cin >> si;
    s.insert(si);
  }
  cout << s.size() << endl;
  return 0;
}
