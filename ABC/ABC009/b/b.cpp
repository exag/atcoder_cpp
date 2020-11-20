#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  set<int> st;
  rep(i, n) {
    int a;
    cin >> a;
    st.insert(a);
  }
  vector<int> p;
  for (int o : st) p.push_back(o);
  sort(p.rbegin(), p.rend());
  cout << p[1] << endl;
  return 0;
}
