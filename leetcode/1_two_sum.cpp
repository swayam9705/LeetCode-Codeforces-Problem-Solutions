#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indices;
        int l = nums.size();

        for (int i = 0; i < l; i++) {
            indices[nums[i]] = i;
        }

        for (int i = 0; i < l; i++) {
            int remainder = target - nums[i];
            if (indices.find(remainder) != indices.end() && indices[remainder] != i) {
                return {i, indices[remainder]};
            }
        }
        return {-1, -1};
    }
};