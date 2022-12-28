#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// A. Indirect Sort

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a)
        cin >> x;
    
    if(a[0] == 1)
        cout << "YES\n";
    else 
        cout << "NO\n";
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
