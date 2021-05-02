#include <string>
#include <sstream>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        if (nums.empty()) return 0;

        int len = nums.size();
        int last_item = nums.at(0);
        
        for (int i = 1; i < nums.size(); ++i)
        {
            int current_item = nums.at(i);
            if (last_item == current_item)
            {
                len--;
                nums.erase(nums.begin() + i);
                i--;
            }
            
            last_item = current_item;
        }
        
        return len;
    }
};
