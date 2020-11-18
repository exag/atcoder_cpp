#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w;
  cin >> h >> w;
  cout << string(w + 2, '#') << endl;
  rep(i, h) {
    string a;
    cin >> a;
    cout << "#" << a << "#" << endl;
  }
  cout << string(w + 2, '#') << endl;
  return 0;
}
