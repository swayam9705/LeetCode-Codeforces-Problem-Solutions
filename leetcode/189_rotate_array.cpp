#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:

        void rotateHelper(vector<int>& nums, int i, int j) {
            while (i <= j) {
                swap(nums[i], nums[j]);
                i++;
                j--;
            }
        }

        void rotate(vector<int>& nums, int k) {
            int l = nums.size();
            k = k % l;
            rotateHelper(nums, 0, l - 1);
            rotateHelper(nums, 0, k - 1);
            rotateHelper(nums, k, l - 1);
        }
};