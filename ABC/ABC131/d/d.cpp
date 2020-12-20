#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, n) for (int i = s; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<P> p(n);
  rep(i, n) cin >> p[i].second >> p[i].first;
  sort(p.begin(), p.end());
  ll t = 0;
  rep(i, n) {
    t += p[i].second;
    // 全部の仕事をこなしたときに締め切りを過ぎているかどうか
    if (t > p[i].first) {
      puts("No");
      return 0;
    }
  }
  puts("Yes");
  return 0;
}
