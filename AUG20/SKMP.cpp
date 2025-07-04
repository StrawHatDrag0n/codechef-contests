#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 0;
    cin>>t;

    while(t--) {
        string s, p;
        int s_char_count[26], p_char_count[26];
        cin>>s>>p;

        fill(s_char_count, s_char_count+26, 0);
        fill(p_char_count, p_char_count+26, 0);

        for (int i = 0; i < s.length(); i++)
            s_char_count[s[i] - 'a']++;

        for (int i = 0; i < p.length(); i++)
            p_char_count[p[i] - 'a']++;

        string result;
        bool match_found = false;
        int  i;
        for(i = 0; i < 26;) {
            if (s_char_count[i]) {
                if (p[0] == ('a' + i))
                    break;
                else if (s_char_count[i] > p_char_count[i]) {
                    s_char_count[i]--;
                    result.push_back('a' + i);
                } else {
                    i++;
                }
            } else {
                i++;
            }
        }
        cout<<result<<endl;

    }
}