#include<bits/stdc++.h>

using namespace std;

// TODO

float get_slope(int x1, int y1, int x2, int y2) {
    return (y2 - y1) / (x2- x2);
} 

int main () {
    int t = 0;
    cin>>t;

    while(t--) {
        int n = 0, k = 0, x = 0, y = 0;
        cin>>n>>k>>x>>y;

        int cor1 = (int)get_slope(x, y, n, n);
        int cor2 = (int)get_slope(x, y, n, 0);

        if (cor1 == 1) {
        }
        

        
    }
}