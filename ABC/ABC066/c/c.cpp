#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  deque<int> a;
  rep(i, n) {
    int ai;
    cin >> ai;
    if (i % 2 != n % 2) {
      a.push_front(ai);
    } else {
      a.push_back(ai);
    }
  }
  rep(i, n) { cout << a[i] << endl; }
  return 0;
}
