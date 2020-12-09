#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  map<int, int> mp;
  mp[0] = 123456;
  mp[1] = 213456;
  mp[2] = 231456;
  mp[3] = 234156;
  mp[4] = 234516;
  mp[5] = 234561;
  mp[6] = 324561;
  mp[7] = 342561;
  mp[8] = 345261;
  mp[9] = 345621;
  mp[10] = 345612;
  mp[11] = 435612;
  mp[12] = 453612;
  mp[13] = 456312;
  mp[14] = 456132;
  mp[15] = 456123;
  mp[16] = 546123;
  mp[17] = 564123;
  mp[18] = 561423;
  mp[19] = 561243;
  mp[20] = 561234;
  mp[21] = 651234;
  mp[22] = 615234;
  mp[23] = 612534;
  mp[24] = 612354;
  mp[25] = 612345;
  mp[26] = 162345;
  mp[27] = 126345;
  mp[28] = 123645;
  mp[29] = 123465;
  cout << mp[n % 30] << endl;
  return 0;
}
