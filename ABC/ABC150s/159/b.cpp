#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  string s1 = s;
  reverse(s1.begin(), s1.end());
  if (s != s1) {
    cout << "No" << endl;
    return 0;
  }
  string s2 = s.substr(0, (s.size() - 1) / 2);
  string s3 = s2;
  reverse(s3.begin(), s3.end());
  if (s2 != s3) {
    cout << "No" << endl;
    return 0;
  }
  string s4 = s.substr((s.size() + 3) / 2 - 1);
  string s5 = s4;
  reverse(s5.begin(), s5.end());
  if (s4 != s5) {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  return 0;
}
