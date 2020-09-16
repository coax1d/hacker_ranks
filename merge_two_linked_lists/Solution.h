#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        vector<int> sort_vec;
        
        while (l1)
        {
            // dump to vector
            sort_vec.push_back(l1->val);
            
            if (l1->next == NULL) break; // at the end of the LL
            
            // move through linked list
            ListNode* temp = l1->next;
            l1->next = l1->next->next;
            l1 = temp;
        }
        
        while (l2)
        {
            // dump to vector
            sort_vec.push_back(l2->val);
            
            if (l2->next == NULL) break; // at the end of the LL
            
            // move through linked list
            ListNode* temp = l2->next;
            l2->next = l2->next->next;
            l2 = temp;
        }
        
        sort(sort_vec.begin(), sort_vec.end());
        
        ListNode* p = NULL;
        ListNode* head = NULL;
        
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
