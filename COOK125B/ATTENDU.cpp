#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main () {
    double t = 0;
    cin>>t;
    while(t--) {
        double n = 0;
        cin>>n;
        string atten;
        cin>>atten;
        double abs_days = 0;
        double pre_days = 0;
        for(int i = 0; i < atten.size(); i++) {
            if (atten[i] == '0') {
                abs_days++;
            } else {
                pre_days++;
            }
        }
        if (((pre_days + 120 - n) / 120) >= 0.75) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
}