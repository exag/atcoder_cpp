#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n, a, b;
  string op;
  cin >> n >> a;
  rep(i,n) {
    cin >> op >> b;
    if (op == "+") {
      a += b;
    }else if(op == "-"){
      a -= b;
    }else if(op == "*"){
      a *= b;
    }else if(op == "/" && b != 0){
      a /= b;
    }else{
      cout << "error" << endl;
      return 0;
    }
    cout << i+1 << ":" << a << endl;
  }
}

