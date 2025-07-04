#include<bits/stdc++.h>
#define ll int

// couldn't solve in time, had to see editorial, need to consider all the edge cases the question was easy

using namespace std;

int main() {
    ll t = 0;
    scanf("%d", &t);
    
    while(t--) {
        ll n = 0, m = 0, x = 0, y = 0;
        scanf("%d %d %d %d", &n, &m, &x, &y);
        
        if (n * m > 1) x = min(x, y);
        y = min(2*x, y);
        cout<< ((n * m + 1) / 2) * x + ((n * m) / 2) * (y - x)<<endl; 
    

    }
}