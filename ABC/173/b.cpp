#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  map<string, int> submit;
  submit["AC"] = 0;
  submit["WA"] = 0;
  submit["TLE"] = 0;
  submit["RE"] = 0;
  rep(i, n) {
    string s;
    cin >> s;
    submit[s]++;
  }
  cout << "AC x " << submit["AC"] << endl;
  cout << "WA x " << submit["WA"] << endl;
  cout << "TLE x " << submit["TLE"] << endl;
  cout << "RE x " << submit["RE"] << endl;
  return 0;
}
