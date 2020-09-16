#include "Solution.h"

int main(void)
{
	vector<int> nums = {1,1,2,3};
	Solution do_it;
	do_it.removeDuplicates(nums);
	
	ostringstream vts;
	
	if (!nums.empty())
	{
		vts << "[";
		copy(nums.begin(), nums.end() - 1,
			ostream_iterator<int>(vts, ", "));
		vts << nums.back();
		vts << "]";
	}

	cout << vts.str() << endl;

	return 0;
}
