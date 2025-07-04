#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 0;
    cin>>t;
    while(t--) {
        int h = 0, p = 0;
        cin>>h>>p;

        while(h > 0 && p > 0) {
            h -= p;
            p /= 2;
        }

        if (p  <= 0 && h > 0) {
            cout<<"0\n";
        } else {
            cout<<"1\n";
        }
    }
}