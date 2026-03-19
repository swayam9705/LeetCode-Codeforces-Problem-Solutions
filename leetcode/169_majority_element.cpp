#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int l = nums.size();
        int currElement = nums[0];
        int count = 1;

        for (int i = 1; i < l; i++) {
            if (nums[i] == currElement) {
                count++;
            }
            else {
                if (count == 1) {
                    currElement = nums[i];
                }
                else {
                    count--;
                }
            }
        }

        return currElement;
    }
};