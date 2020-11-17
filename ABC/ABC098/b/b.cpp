#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int f(string a, string b) {
  set<char> s;
  for (char c : a) {
    if (b.find(c) != string::npos) {
      s.insert(c);
    }
  }
  return s.size();
}

int main() {
  int n;
  string s;
  cin >> n >> s;
  int ans = 0;
  rep(i, n - 1) {
    string a = s.substr(0, i + 1);
    string b = s.substr(i + 1);
    ans = max(ans, f(a, b));
  }
  cout << ans << endl;
  return 0;
}
