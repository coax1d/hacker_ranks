#include "Solution.h"

int main(void)
{
	Solution do_it;
	vector<int> nums;
	int target;

	// at the end of an array
    nums = {1,2,3};
	target = 4;
    do_it.searchInsert(nums, target);

	// in the middle of array
	nums = {1,2,3};
	target = 2;
    do_it.searchInsert(nums, target);
	
	// beginning of array
	nums = {1,3};
 	target = 2;
    do_it.searchInsert(nums, target);
	
    return 0;
}
