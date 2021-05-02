#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <algorithm>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {

        std::vector<int> sort_vec;

        while (l1)
        {
            // dump to vector
            sort_vec.push_back(l1->val);

            // move through linked list
            l1 = l1->next;
        }

        while (l2)
        {
            // dump to vector
            sort_vec.push_back(l2->val);

            // move through linked list
            l2 = l2->next;
        }

        std::sort(sort_vec.begin(), sort_vec.end());

        ListNode *p = NULL;
        ListNode *head = NULL;

        for (int i = 0; i < sort_vec.size(); ++i) // construct LL
        {
            ListNode* new_node = new ListNode(sort_vec.at(i));

            if (p == NULL)
            {
                p = new_node;
                head = new_node;
                continue;
            }
            p->next = new_node;
            // move along the list
            p = new_node;
        }

        return head;
    }
};
