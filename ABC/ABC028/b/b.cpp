#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  map<char, int> mp;
  rep(i, s.size()) mp[s[i]]++;
  cout << mp['A'] << " ";
  cout << mp['B'] << " ";
  cout << mp['C'] << " ";
  cout << mp['D'] << " ";
  cout << mp['E'] << " ";
  cout << mp['F'] << endl;
  return 0;
}
