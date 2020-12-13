#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int x;
  cin >> x;
  int i = 0;
  int sm = 0;
  while (true) {
    sm += i;
    if (sm >= x) break;
    i++;
  }
  cout << i << endl;
  return 0;
}
