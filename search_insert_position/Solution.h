#include <string>
#include <sstream>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int target_index = 0;
		
       	cout << "list is ";
		for (int i = 0; i < nums.size(); i++)
		{
			cout << nums.at(i) << ' ';
		}
		cout << endl;
		 
        for (int i = 0; i < nums.size(); i++)
        {
            if (target > nums.at(i))
            {
                if (i == nums.size() - 1) // Case where element blongs at end of list
                {
                    target_index = i + 1;
                }

                continue;
            }
            
            target_index = i;
            break;
        }
        
        cout << "returning target_index == " << target_index << endl;
        return target_index;
    }
};
