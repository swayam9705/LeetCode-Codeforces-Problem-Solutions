#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:

        // brute-force
        bool canJumpHelper(int currPos, vector<int>& nums) {
            int l = nums.size();
            if (currPos == l - 1) return true;

            for (int i = 1; i <= nums[currPos]; i++) {
                if (canJumpHelper(currPos + i, nums)) return true;
            }

            return false;

        }

        bool canJump_v1(vector<int>& nums) {
            return canJumpHelper(0, nums);
        }

        // optimized
        bool canJum_v2(vector<int>& nums) {
            int goal = nums.size() - 1;
            int l = nums.size();

            if (l == 1) return true;

            for (int i = goal - 1; i >= 0; i--) {
                if (nums[i] + i >= goal) goal = i;

                if (goal == 0) return true;
            }

            return false;
        }
};