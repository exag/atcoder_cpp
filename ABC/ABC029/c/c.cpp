#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int n;

void dfs(int d, string s) {
  if (d == n) {
    cout << s << endl;
    return;
  }
  dfs(d + 1, s + "a");
  dfs(d + 1, s + "b");
  dfs(d + 1, s + "c");
}

int main() {
  cin >> n;
  dfs(0, "");
  return 0;
}
