#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int x, y;
  cin >> x >> y;
  map<int, int> mp;
  mp[1] = 1;
  mp[2] = 3;
  mp[3] = 1;
  mp[4] = 2;
  mp[5] = 1;
  mp[6] = 2;
  mp[7] = 1;
  mp[8] = 1;
  mp[9] = 2;
  mp[10] = 1;
  mp[11] = 2;
  mp[12] = 1;
  if (mp[x] == mp[y])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
