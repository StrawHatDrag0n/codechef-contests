#include<bits/stdc++.h>

using namespace std;

string abc = "abcdefghijklmnop";

char decode_message(char msg[], int start, int end) {
    int index = 0;
    int two_pow = 3;
    while(start <= end) {
        if (msg[start] == '1') {
            index += pow(2, two_pow);
        }
        start++;
        two_pow--;
    }
    return abc[index];
}

int main () {
    int t = 0;
    cin>>t;
    while(t--) {
        int n = 0;
        cin>>n;
        char msg[n];
        for(int i = 0; i < n; i++)
            cin>>msg[i];
        for (int i = 0; i < n; i += 4) {
            cout<<decode_message(msg, i, i + 3);
        }
        cout<<endl;
    }
}
