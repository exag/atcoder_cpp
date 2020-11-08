#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string b;
  cin >> b;
  if (b == "A") puts("T");
  if (b == "C") puts("G");
  if (b == "G") puts("C");
  if (b == "T") puts("A");
  return 0;
}
