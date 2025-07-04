#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 0;
    cin>>t;

    while(t--) {
        int d = 0;
        cin>>d;
        int char_index = 0;
        char base = 'a';
        bool start = true;
        string s;
        int s_len = 0;
        while(start) {
            s.push_back(base + char_index % 26);
            s_len+=1;
            char_index++;

            if (((s_len * (s_len + 1))/ 2) - s_len == d) {
                break;
            }
        }
        cout<<s.size()<<endl;
        cout<<s<<endl;
    }        
}