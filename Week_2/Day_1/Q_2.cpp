//First Unique Character in a String
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26, 0);

        for (char ch : s) {
            freq[ch - 'a']++;
        }

        for (int i = 0; i < s.size(); i++) {
            if (freq[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};

int main() {
    string s;
    cin >> s;

    Solution obj;
    cout << obj.firstUniqChar(s) << endl;

    return 0;
}