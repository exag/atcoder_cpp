#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n;
  cin >> n;
  int d = 1;
  ll head = 1;
  while (true) {
    ll next = head + pow(26, d);
    if (next > n) break;
    head += pow(26, d);
    d++;
  }
  n -= head;
  string ans = "";
  rep(i, d) {
    int m = n % 26;
    ans.push_back((char)('a' + m));
    n /= 26;
  }
  reverse(ans.begin(), ans.end());
  cout << ans << endl;
  return 0;
}
