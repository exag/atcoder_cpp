#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  int q;
  cin >> s >> q;
  deque<char> que;
  for (char c : s) que.push_back(c);
  bool rev = false;
  rep(i, q) {
    int t;
    cin >> t;
    if (t == 1) {
      rev = !rev;
      continue;
    }
    int f;
    char c;
    cin >> f >> c;
    if (rev) {
      if (f == 1) {
        que.push_back(c);
      } else {
        que.push_front(c);
      }
    } else {
      if (f == 1) {
        que.push_front(c);
      } else {
        que.push_back(c);
      }
    }
  }
  while (que.size()) {
    if (rev) {
      cout << que.back();
      que.pop_back();
    } else {
      cout << que.front();
      que.pop_front();
    }
  }
  cout << endl;
  return 0;
}
