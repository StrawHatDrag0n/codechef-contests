#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main () {
    ll t = 0;
    cin>>t;
    while(t--) {
        ll pc = 0, pr = 0;
        cin>>pc>>pr;
        ll num_digits_pc = 0, num_digits_pr = 0;
        num_digits_pc = pc / 9;
        num_digits_pr = pr / 9;
        if (pc % 9 != 0) {
            num_digits_pc++;
        }
        if (pr % 9 != 0) {
            num_digits_pr++;
        }
        if (num_digits_pr < num_digits_pc) {
            cout<<1<<" "<<num_digits_pr<<endl;
        } else if (num_digits_pc < num_digits_pr) {
            cout<<0<<" "<<num_digits_pc<<endl;
        } else {
            cout<<1<<" "<<num_digits_pr<<endl;
        }
    }
}