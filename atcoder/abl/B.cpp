#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'
#define maxn 100010
const int MOD = 1000000007;

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int l = max(a, c);
    int r = min(b, d);
    if(r - l + 1 >= 1)cout << "Yes" << endl;
    else cout << "No" << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
//    cin >> t;

    while (t--)
        solve();
    return 0;
}