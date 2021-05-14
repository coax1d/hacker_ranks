/*
Count occurences of a number in a sorted vector of integers
Author: Andrew Burger
*/
#include <vector>
#include <iostream>

class Solution {

    public:

        int binary_search(std::vector<int> &nums, int left, int right, int val) {

            auto result = 0;
            auto mid = (left + right) / 2;

            if (nums.empty()) {
                return -1;
            }

            if (left == right) {

                // Error case where element is not found
                if (nums.at(mid) != val) {
                    return -1;
                }

                return mid;
            }

            if (nums.at(mid) == val) {
                return mid;
            }
            else if(val < nums.at(mid)) {
                result = binary_search(nums, left, mid, val);
            }
            else if (val > nums.at(mid)) {
                result = binary_search(nums, mid + 1, right, val);
            }

            return result;
        }

        int count_occurences(std::vector<int> nums, int num) {

            if (nums.empty()) {
                return -1;
            }

            auto count = 0;

            while (true) {

                auto index = binary_search(nums, 0, nums.size() - 1, num);

                if (index >= 0) {
                    nums.erase(nums.begin() + index);
                }
                else {
                    break;
                }

                count++;
            }

            return count;
        }
};