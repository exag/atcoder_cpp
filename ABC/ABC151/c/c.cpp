#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m;
  cin >> n >> m;
  map<int, vector<string>> submits;
  rep(i, m) {
    int p;
    string s;
    cin >> p >> s;
    submits[p].push_back(s);
  }
  int ansAC = 0;
  int ansWA = 0;
  for (auto submit : submits) {
    int wa = 0;
    for (string s : submit.second) {
      if (s == "WA") wa++;
      if (s == "AC") {
        ansAC += 1;
        ansWA += wa;
        break;
      }
    }
  }
  cout << ansAC << endl;
  cout << ansWA << endl;
  return 0;
}
