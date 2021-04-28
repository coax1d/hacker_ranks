#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {

        int original_length = nums.size();

        for (int i = 0; i < original_length; ++i) {

            if (nums[i] == val) {

                nums.erase(nums.begin() + i);
                original_length--;
                i--;
            }
        }

        return nums.size();
    }
};
