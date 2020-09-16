#include "Solution.h"
int main(void)
{
	Solution do_it;
	string test("III");
	cout << "convert Roman: " << test 
	     << " result = " << do_it.romanToInt(test)
	     << endl;
	return 0;
}
