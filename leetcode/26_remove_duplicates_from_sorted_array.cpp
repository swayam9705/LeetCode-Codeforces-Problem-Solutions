#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int l = nums.size();

            if (l <= 1) return l;

            int i = 0, j = 1;
            int currNum = nums[0];

            while (j < l) {
                if (nums[j] == currNum) {
                    j++;
                }
                else {
                    nums[i] = nums[j];
                    currNum = nums[j];
                    i++;
                    j++;
                }
            }
            

            return i;
        }
};