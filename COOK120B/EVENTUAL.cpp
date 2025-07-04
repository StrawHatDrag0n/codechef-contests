#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 0;
    cin>>t;

    while(t--) {
        int n = 0;
        cin>>n;
        string s;
        cin>>s;
        map<char, int> char_count;

        for(int i = 0; i < s.size(); i++) {
            map<char,int>::iterator it = char_count.find(s[i]);
            if(it == char_count.end()) {
                char_count.insert(pair<char, int>(s[i], 1));
            } else {
                it->second = it->second + 1;
            }
        }
        bool flag = 1;
        for(map<char,int>::iterator it=char_count.begin(); it != char_count.end(); ++it) {
            if(it->second%2 != 0) {
                flag=0;
                break;
            }
        }

        if(flag) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
}