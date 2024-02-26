#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
        vector<pair<int, int>> c;
 
        long long ans = k; 
        int cnt = 1;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
 
        for (int i = 0; i < n; i++) {
            c.push_back(make_pair(a[i], b[i]));
        }
        c.push_back(make_pair(n, k));
 
        sort(c.begin(), c.end(), [](const pair<int, int>& x, const pair<int, int>& y) {
            return x.second < y.second;
        });
 
        for (auto u : c) {
            if (u.first < (n - cnt)) {
                if (cnt == n) break;
 
                ans += static_cast<long long>(u.second) * u.first;
                cnt += u.first;
            } else {
                if (cnt == n) break;
 
                ans += static_cast<long long>(u.second) * (n - cnt);
                cnt = n;
            }
        }
 
        cout << ans << endl;
    }
 
}