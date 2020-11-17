#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

map<ll, ll> memo;

ll lucas(int n) {
  if (memo[n] != 0) return memo[n];
  memo[n] = lucas(n - 2) + lucas(n - 1);
  return memo[n];
}

int main() {
  int n;
  cin >> n;
  ll ans;
  memo[0] = 2;
  memo[1] = 1;
  cout << lucas(n) << endl;
  return 0;
}
