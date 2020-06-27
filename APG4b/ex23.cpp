#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int mx = 0;
  int ans;
  int n, a;
  cin >> n;
  map<int, int> cnt;
  rep(i,n) {
    cin >> a;
    cnt[a]++;
    if (cnt[a] > mx) {
      mx = cnt[a];
      ans = a;
    }
  }
  cout << ans << " " << cnt[ans] << endl;
}
