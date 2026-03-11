#include <iostream>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i = 0, j = 0, result = 0;

        unordered_set<char> seen;

        while (j < n) {
            if (seen.find(s[j]) == seen.end()) {
                seen.insert(s[j]);
                j++;
                result = max(result, j - i);
            }

            else {
                seen.erase(s[i]);
                i++;
            }
        }
        return result;
    }
};