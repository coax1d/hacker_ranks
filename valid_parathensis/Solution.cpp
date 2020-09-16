#include "Solution.h"
int main(void)
{
        Solution do_it;
        string test("[](){}");
        cout << "Valid Parathesis:  " << test
             << " result = " << do_it.isValid(test)
             << endl;
        return 0;
}
