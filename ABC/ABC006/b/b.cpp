#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

map<int, ll> memo;

ll tribo(int n) {
  if (n <= 3) return memo[n];
  if (memo[n] != 0) return memo[n];
  memo[n] = tribo(n - 1) + tribo(n - 2) + tribo(n - 3);
  memo[n] %= 10007;
  return memo[n];
}

int main() {
  int n;
  cin >> n;
  memo[1] = 0;
  memo[2] = 0;
  memo[3] = 1;
  cout << tribo(n) << endl;
  return 0;
}
