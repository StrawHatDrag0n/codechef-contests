#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
    ll t = 0;
    cin>>t;
    while(t--) {
        ll n = 0, k = 0;
        cin>>n>>k;
        map<int, int> color_to_num_ducks;
        map<int, vector<int>> modulo_to_color;
        for(int i = 0; i < n+1; i++) {
            ll num_ducks = 0;
            cin>>num_ducks;
            color_to_num_ducks[i] = num_ducks;
            modulo_to_color[num_ducks%k].push_back(i);
        }
        vector<int> color_done(n+1);
        for(auto item: color_to_num_ducks) {
            if (item.second % k == 0) {
                ll temp = item.second;
                while(temp > 1) {
                    cout<<item.first<<" "<<k<<" "<<0<<" "<<0<<endl;
                    temp /= k;
                }
                color_done[item.first] = 1;
            } else {
                ll color = modulo_to_color[k - item.second%k].back();
                cout<<item.first<<" "<<item.second%k<<" "<<color<<" "<<color_to_num_ducks[color]%k<<endl;
                color_to_num_ducks[color] -= color_to_num_ducks[color]%k;
                ll temp = item.second - item.second%k;
                while(temp) {
                    cout<<item.first<<" "<<k<<" "<<0<<" "<<0<<endl;
                    temp /= k;
                }
            }
        }
    }  
}