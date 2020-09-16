#include "Solution.h"
int main(void)
{
    Solution do_it;
	ListNode* list1 = new ListNode(1);
	ListNode* list2 = new ListNode(2);
    ListNode* test = do_it.mergeTwoLists(list1, list2);

	while(test)
	{
		cout << "result list value: " << test->val << endl;

		if (test->next == NULL) break;

		// move through the list
		ListNode* temp = test->next;
		test->next = test->next->next;
		test = temp;
	}
    
    return 0;
}
