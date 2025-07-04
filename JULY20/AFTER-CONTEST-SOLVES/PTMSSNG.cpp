#include<bits/stdc++.h>
#define ll int

using namespace std;

int main() {
    ll t = 0;
    scanf("%d", &t);
    map<ll,ll> mpx, mpy;
    while(t--) {
        ll n = 0;
        scanf("%d", &n);
        mpx.clear();
        mpy.clear();
        ll x = 0, y = 0;
        for(ll i  = 0; i < 4 * n - 1; i++) {
            scanf("%d %d", &x, &y);
            mpx[x]++;
            mpy[y]++;
        }
        for(auto itx:mpx) {
            if (itx.second&1) {
                x = itx.first;
                break;
            }
        }
        for(auto ity:mpy) {
            if (ity.second&1) {
                y = ity.first;
                break;
            }
        }
        cout<<x<<" "<<y<<endl;
    }

}