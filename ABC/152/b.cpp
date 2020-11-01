#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  char a, b;
  cin >> a >> b;
  if (a < b)
    cout << string(b - '0', a) << endl;
  else
    cout << string(a - '0', b) << endl;
  return 0;
}
