#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> a;
  set<int> s;
  rep(i, n) {
    int ai;
    cin >> ai;
    a.push_back(ai);
    s.insert(ai);
  }
  if (a.size() == s.size())
    puts("YES");
  else
    puts("NO");
  return 0;
}
