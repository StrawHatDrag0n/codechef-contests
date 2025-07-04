#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ll t = 0;
    cin>>t;

    while(t--) {
        ll n = 0;
        cin>>n;
        ll N[n+1];
        fill(N, N + n + 1, 0);
        ll skipped = 0;
        for (ll i = 1; i <= n; i++) {
            cin>>N[i];
            if (i > 1) {
                skipped += abs(N[i] - N[i - 1]) - 1;
            }
        }
        cout<<skipped<<endl;
    }
}