#include<bits/stdc++.h>
using namespace std;

#define int long long

// B. Maximum Substring

void solve() {
    int n;
    string s;
    cin >> n >> s;
    s = '#' + s;

    int cnt0 = 0, cnt1 = 0;
    for(int i = 1; i <= n; ++i) {
        cnt0 += (s[i] == '0');
        cnt1 += (s[i] == '1');
    }
    
    int ans = cnt0 * cnt1;
    int lg = 1;
    for(int i = 2; i <= n; ++i) {
        if(s[i] == s[i-1]) lg++;
        else {
            ans = max(ans, lg * lg);
            lg = 1;
        }
    }

    ans = max(ans, lg * lg);
    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;
    for(int i=1; i<=test; i++) {
        solve();
    }

    return 0;
}
