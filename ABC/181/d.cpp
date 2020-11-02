#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  if (s.size() == 1) {
    if (s == "8")
      puts("Yes");
    else
      puts("No");
    return 0;
  }
  map<char, int> m;
  rep(i, s.size()) m[s[i]]++;
  vector<int> eight2;
  vector<int> eight3;
  int p = 2;
  while (8 * p < 1000) {
    int e = 8 * p;
    if (to_string(e).find("0") == string::npos) {
      if (e < 100)
        eight2.push_back(e);
      else if (e < 1000)
        eight3.push_back(e);
    }
    p++;
  }
  if (s.size() == 2) {
    for (int e : eight2) {
      map<char, int> m2;
      for (char s2 : to_string(e)) {
        m2[s2]++;
      }
      bool ans = true;
      rep(i, 9) {
        char d = '1' + i;
        if (m2[d] > 0) {
          if (m[d] < m2[d]) ans = false;
        }
      }
      if (ans) {
        puts("Yes");
        return 0;
      }
    }
    puts("No");
    return 0;
  }
  for (int e : eight3) {
    map<char, int> m3;
    for (char s3 : to_string(e)) {
      m3[s3]++;
    }
    bool ans = true;
    rep(i, 9) {
      char d = '1' + i;
      if (m3[d] > 0) {
        if (m[d] < m3[d]) ans = false;
      }
    }
    if (ans) {
      puts("Yes");
      return 0;
    }
  }
  puts("No");
  return 0;
}
