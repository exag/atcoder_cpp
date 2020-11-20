#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  int hh = n / 3600;
  n -= hh * 3600;
  int mm = n / 60;
  n -= mm * 60;
  int ss = n;
  printf("%02d:%02d:%02d\n", hh, mm, ss);
  return 0;
}
