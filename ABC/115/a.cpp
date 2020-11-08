#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int d;
  cin >> d;
  if (d == 25)
    puts("Christmas");
  else if (d == 24)
    puts("Christmas Eve");
  else if (d == 23)
    puts("Christmas Eve Eve");
  else if (d == 22)
    puts("Christmas Eve Eve Eve");
  return 0;
}
