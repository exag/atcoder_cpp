#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n, a, b;
  cin >> n;
  vector<P> ab;
  rep(i,n) {
    cin >> a >> b;
    P p = make_pair(b, a);
    ab.push_back(p);
  }
  sort(ab.begin(), ab.end());
  rep(i,n) {
    int a, b;
    tie(a, b) = ab[i];
    cout << b << " " << a << endl;
  }
}
