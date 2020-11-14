#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  set<char> st;
  rep(i, 4) st.insert(s[i]);
  if (st.size() == 1)
    cout << "SAME" << endl;
  else
    cout << "DIFFERENT" << endl;
  return 0;
}
