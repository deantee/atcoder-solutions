#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll deg, dis;
  cin >> deg >> dis;
  ll v10{(dis * 10 + 30) / 60};
  ll w;
  if (v10 <= 2) {
    w = 0;
  } else if (v10 <= 15) {
    w = 1;
  } else if (v10 <= 33) {
    w = 2;
  } else if (v10 <= 54) {
    w = 3;
  } else if (v10 <= 79) {
    w = 4;
  } else if (v10 <= 107) {
    w = 5;
  } else if (v10 <= 138) {
    w = 6;
  } else if (v10 <= 171) {
    w = 7;
  } else if (v10 <= 207) {
    w = 8;
  } else if (v10 <= 244) {
    w = 9;
  } else if (v10 <= 284) {
    w = 10;
  } else if (v10 <= 326) {
    w = 11;
  } else {
    w = 12;
  }
  if (w == 0) {
    cout << "C 0\n";
    return 0;
  }
  string dir;
  if (deg <= 112 || deg >= 3488) {
    cout << "N";
  } else if (deg <= 337) {
    cout << "NNE";
  } else if (deg <= 562) {
    cout << "NE";
  } else if (deg <= 787) {
    cout << "ENE";
  } else if (deg <= 1012) {
    cout << "E";
  } else if (deg <= 1237) {
    cout << "ESE";
  } else if (deg <= 1462) {
    cout << "SE";
  } else if (deg <= 1687) {
    cout << "SSE";
  } else if (deg <= 1912) {
    cout << "S";
  } else if (deg <= 2137) {
    cout << "SSW";
  } else if (deg <= 2362) {
    cout << "SW";
  } else if (deg <= 2587) {
    cout << "WSW";
  } else if (deg <= 2812) {
    cout << "W";
  } else if (deg <= 3037) {
    cout << "WNW";
  } else if (deg <= 3262) {
    cout << "NW";
  } else {
    cout << "NNW";
  }
  cout << ' ' << w << '\n';
  return 0;
}
