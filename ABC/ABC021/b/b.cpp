#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  int a, b;
  int k;
  cin >> n >> a >> b >> k;
  set<int> st;
  rep(i, k) {
    int p;
    cin >> p;
    st.insert(p);
  }
  if (st.size() == k && st.find(a) == st.end() && st.find(b) == st.end())
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
