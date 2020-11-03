#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  string sa = s.substr(0, 2);
  string sb = s.substr(2);
  bool ba = (1 <= stoi(sa) && stoi(sa) <= 12);
  bool bb = (1 <= stoi(sb) && stoi(sb) <= 12);
  if (ba && bb)
    puts("AMBIGUOUS");
  else if (ba)
    puts("MMYY");
  else if (bb)
    puts("YYMM");
  else
    puts("NA");
  return 0;
}
