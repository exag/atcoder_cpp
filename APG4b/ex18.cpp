#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n, m;
  cin >> n >> m;
  char result[n][n];

  rep(i,n) rep(j,n) result[i][j] = '-';

  int a, b;
  rep(i,m) {
    cin >> a >> b;
    a--;
    b--;
    result[a][b] = 'o';
    result[b][a] = 'x';
  }
    
  rep(i,n) {
    rep(j,n) {
      if (j != 0) cout << " ";
      cout << result[i][j];
    }
    cout << endl;
  }
}
