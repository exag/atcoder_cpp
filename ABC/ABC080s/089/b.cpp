#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  set<string> st;
  rep(i, n) {
    string s;
    cin >> s;
    st.insert(s);
  }
  if (st.size() == 3)
    cout << "Three" << endl;
  else
    cout << "Four" << endl;
  return 0;
}
