#include "Solution.h"

int main(void)
{
    Solution do_it;
	ListNode *list1 = new ListNode(1);
	ListNode *list2 = new ListNode(2);
    ListNode *test = do_it.mergeTwoLists(list1, list2);

	while(test)
	{
		std::cout << "result list value: " << test->val << std::endl;

		// move through the list
		test = test->next;
	}

    return 0;
}
