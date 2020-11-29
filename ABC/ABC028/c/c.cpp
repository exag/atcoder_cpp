#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  vector<int> n(5);
  rep(i, 5) cin >> n[i];
  set<int> st;
  do {
    int sm = 0;
    rep(i, 3) sm += n[i];
    st.insert(sm);
  } while (next_permutation(n.begin(), n.end()));
  vector<int> v(st.begin(), st.end());
  sort(v.rbegin(), v.rend());
  cout << v[2] << endl;
  return 0;
}
