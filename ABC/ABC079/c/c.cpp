#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;
  int a = s[0] - '0';
  int b = s[1] - '0';
  int c = s[2] - '0';
  int d = s[3] - '0';
  vector<string> op = {"+", "-"};
  for (string op1 : op)
    for (string op2 : op)
      for (string op3 : op) {
        int v = a;
        if (op1 == "+")
          v += b;
        else
          v -= b;
        if (op2 == "+")
          v += c;
        else
          v -= c;
        if (op3 == "+")
          v += d;
        else
          v -= d;
        if (v == 7) {
          cout << a << op1 << b << op2 << c << op3 << d << "=" << 7 << endl;
          return 0;
        }
      }
  return 0;
}
