//Valid Anagram
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;

        vector<int> freq(26, 0);

        for (char ch : s)
            freq[ch - 'a']++;

        for (char ch : t)
            freq[ch - 'a']--;

        for (int count : freq) {
            if (count != 0)
                return false;
        }

        return true;
    }
};

int main() {
    string s, t;
    cin >> s >> t;

    Solution obj;

    if (obj.isAnagram(s, t))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}