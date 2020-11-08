#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  int m = stoi(s.substr(5, 2));
  if (m <= 4)
    puts("Heisei");
  else
    puts("TBD");
  return 0;
}
