#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

bool isPrime(int n) {
  if (n == 1) return false;
  for (int i = 2; i * i <= n; ++i) {
    if (n % i == 0) return false;
  }
  return true;
}

int main() {
  int x;
  cin >> x;
  for (int i = x; i <= 1e9 + 7; ++i) {
    if (isPrime(i)) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}
