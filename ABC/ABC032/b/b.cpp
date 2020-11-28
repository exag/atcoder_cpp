#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  int k;
  cin >> s >> k;
  if (s.size() < k) {
    cout << 0 << endl;
    return 0;
  }
  set<string> st;
  rep(i, s.size() - k + 1) st.insert(s.substr(i, k));
  cout << st.size() << endl;
  return 0;
}
