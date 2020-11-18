#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  set<char> st;
  string ans = "Yes";
  rep(i, s.size()) st.insert(s[i]);
  if (st.size() == s.size())
    cout << "yes" << endl;
  else
    cout << "no" << endl;
  return 0;
}
