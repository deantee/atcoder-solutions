#include <bits/stdc++.h>

using namespace std;
using ll = long long;

static ll to_minutes(const string& str) {
  return ((str[0] - '0') * 10 + (str[1] - '0')) * 60 + (str[2] - '0') * 10 +
         (str[3] - '0');
}

static string format(ll min) {
  char buf[5];
  snprintf(buf, sizeof(buf), "%02lld%02lld", min / 60, min % 60);
  return string(buf);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n;
  cin >> n;
  vector<pair<ll, ll>> vec;
  vec.reserve(n);
  for (ll i{}; i < n; ++i) {
    string str;
    cin >> str;
    ll dash(str.find('-'));
    string a{str.substr(0, dash)};
    string b{str.substr(dash + 1)};
    ll start{to_minutes(a)}, end{to_minutes(b)};
    start = start / 5 * 5;
    end = (end + 4) / 5 * 5;
    vec.emplace_back(start, end);
  }
  sort(vec.begin(), vec.end());
  vector<pair<ll, ll>> ans;
  for (auto& p : vec) {
    if (ans.empty() || p.first > ans.back().second) {
      ans.push_back(p);
    } else {
      ans.back().second = max(ans.back().second, p.second);
    }
  }
  for (auto& p : ans) {
    cout << format(p.first) << "-" << format(p.second) << "\n";
  }
  return 0;
}
