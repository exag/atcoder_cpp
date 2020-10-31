#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a[3][3];
  rep(i, 3) {
    int a1, a2, a3;
    cin >> a[i][0] >> a[i][1] >> a[i][2];
  }
  int n;
  cin >> n;
  vector<int> b;
  rep(i, n) {
    int bi;
    cin >> bi;
    b.push_back(bi);
  }
  rep(i, 3) {
    if (find(b.begin(), b.end(), a[i][0]) != b.end() &&
        find(b.begin(), b.end(), a[i][1]) != b.end() &&
        find(b.begin(), b.end(), a[i][2]) != b.end()) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  rep(i, 3) {
    if (find(b.begin(), b.end(), a[0][i]) != b.end() &&
        find(b.begin(), b.end(), a[1][i]) != b.end() &&
        find(b.begin(), b.end(), a[2][i]) != b.end()) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  if (find(b.begin(), b.end(), a[0][0]) != b.end() &&
      find(b.begin(), b.end(), a[1][1]) != b.end() &&
      find(b.begin(), b.end(), a[2][2]) != b.end()) {
    cout << "Yes" << endl;
    return 0;
  }
  if (find(b.begin(), b.end(), a[0][2]) != b.end() &&
      find(b.begin(), b.end(), a[1][1]) != b.end() &&
      find(b.begin(), b.end(), a[2][0]) != b.end()) {
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
  return 0;
}
