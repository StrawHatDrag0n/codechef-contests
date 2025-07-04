#include<bits/stdc++.h>
#define ll long long

using namespace std;

// ll digit_sum[1000000000];

ll calc_digit_sum(ll num) {
    ll sum = 0;
    ll temp_num = num;
    while(num) {
        sum += num % 10;
        num /= 10;
    }
    // digit_sum[temp_num] = sum;
    return sum;
}

int main() {
    ll t = 0;
    cin>>t;

    while(t--) {
        ll n;
        cin>>n;
        ll a_score = 0, b_score = 0;
        while(n--) {
            ll a, b;
            cin>>a>>b;
            ll a_point = 0, b_point = 0;
            
            a_point = calc_digit_sum(a);

            b_point += calc_digit_sum(b);
            if (a_point > b_point) {
                a_score += 1;
            } else if (a_point < b_point) {
                b_score += 1;
            } else {
                a_score += 1;
                b_score += 1;
            }

        }
        if (a_score > b_score) {
            cout<<0<<" "<<a_score<<endl;
        } else if (a_score < b_score) {
            cout<<1<<" "<<b_score<<endl;
        } else {
            cout<<2<<" "<<a_score<<endl;
        }
    }
}