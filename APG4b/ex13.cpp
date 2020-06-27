#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n;
  cin >> n;
  int sum = 0;
  vector<int> scores(n);
  int a;
  rep(i,n) {
    cin >> a;
    scores[i] = a;
    sum += a;
  }
  int average = sum / n;
  rep(i,n) {
    cout << abs(scores[i] - average) << endl;
  }
}
