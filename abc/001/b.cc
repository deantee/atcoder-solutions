#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll m;
  cin >> m;
  cout << setw(2) << setfill('0');
  if (m < 100) {
    cout << "00";
  } else if (m <= 5000) {
    cout << m / 100;
  } else if (m <= 30000) {
    cout << m / 1000 + 50;
  } else if (m <= 70000) {
    cout << (m / 1000 - 30) / 5 + 80;
  } else {
    cout << "89";
  }
  cout << '\n';
}
