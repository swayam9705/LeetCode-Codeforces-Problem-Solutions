#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = nums.size();

        int j = 1;
        int repeat = 1;

        for (int i = 1; i < l; i++) {
            if (nums[i] == nums[i - 1]) {
                repeat++;
            }
            else {
                repeat = 1;
            }

            if (repeat < 3) {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};