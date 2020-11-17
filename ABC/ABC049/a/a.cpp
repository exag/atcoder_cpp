#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  char c;
  cin >> c;
  vector<char> m = {'a', 'e', 'i', 'o', 'u'};
  if (find(m.begin(), m.end(), c) == m.end())
    cout << "consonant" << endl;
  else
    cout << "vowel" << endl;
  return 0;
}
