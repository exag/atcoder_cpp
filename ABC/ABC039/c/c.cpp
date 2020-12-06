#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  string o = "WBWBWWBWBWBWWBWBWWBWBWBWWBWBWWBWBWBWWBWBWWBWBWBWWBWBWWBWBWBW";
  map<int, string> ans;
  ans[0] = "Do";
  ans[1] = "Do";
  ans[2] = "Re";
  ans[3] = "Re";
  ans[4] = "Mi";
  ans[5] = "Fa";
  ans[6] = "Fa";
  ans[7] = "So";
  ans[8] = "So";
  ans[9] = "La";
  ans[10] = "La";
  ans[11] = "Si";
  int idx = o.find(s);
  cout << ans[idx] << endl;
  return 0;
}
