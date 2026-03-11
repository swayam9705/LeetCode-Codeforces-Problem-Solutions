#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int resultPointer = m + n - 1;
        int p1 = m - 1, p2 = n - 1;

        while (p1 >= 0 && p2 >= 0) {
            if (nums1[p1] > nums2[p2]) {
                nums1[resultPointer] = nums1[p1];
                p1--;
            }
            else {
                nums1[resultPointer] = nums2[p2];
                p2--;
            }

            resultPointer--;
        }

        while (p1 >= 0) {
            nums1[resultPointer] = nums1[p1];
            p1--;
            resultPointer--;
        }

        while (p2 >= 0) {
            nums1[resultPointer] = nums2[p2];
            p2--;
            resultPointer--;
        }
    }
};