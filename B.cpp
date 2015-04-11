#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int D;
int P[1010];

void input() {
  cin >> D;
  for (auto i=0; i<D; i++) {
    cin >> P[i];
  }
}

void output() {
  sort(P, P+D);
  reverse(P, P+D);
  int M = P[0];
  // cerr << M << endl;
  int t = 0;
  while (M > 1) {
    M = M - M/2;
    t++;
  }
  cout << t+1 << endl;
}

int main() {
  int T;
  cin >> T;
  for (auto t=1; t<=T; t++) {
    cout << "Case #" << t << ": "; 
    input();
    output();
  }
}
