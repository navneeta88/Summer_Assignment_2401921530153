//Ransom Note
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freq(26, 0);

        for (char ch : magazine) {
            freq[ch - 'a']++;
        }

        for (char ch : ransomNote) {
            freq[ch - 'a']--;

            if (freq[ch - 'a'] < 0) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    string ransomNote, magazine;

    cin >> ransomNote >> magazine;

    Solution obj;

    if (obj.canConstruct(ransomNote, magazine))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}