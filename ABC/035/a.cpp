#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int w, h;
  cin >> w >> h;
  if (4 * h == 3 * w)
    cout << "4:3" << endl;
  else
    cout << "16:9" << endl;
  return 0;
}
