#include <bits/stdc++.h>
#define rep(i, n) for (long i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  long n, w;
  cin >> n >> w;
  vector<long> water;
  rep(i, 200005) water.push_back(0);
  rep(i, n) {
    long s, t, p;
    cin >> s >> t >> p;
    water[s] += p;
    water[t] -= p;
  }
  rep(i, 200005) water[i + 1] += water[i];
  string ans = "Yes";
  rep(i, 200005) {
    if (water[i] > w) {
      ans = "No";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
