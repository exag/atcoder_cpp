#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  string ans;
  if (n <= 59)
    ans = "Bad";
  else if (n <= 89)
    ans = "Good";
  else if (n <= 99)
    ans = "Great";
  else if (n == 100)
    ans = "Perfect";
  cout << ans << endl;
  return 0;
}
