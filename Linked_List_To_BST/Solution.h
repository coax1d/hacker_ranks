/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {

        ListNode *current = head;
        std::vector<int> nums;
        TreeNode *root = nullptr;

        while (current) {
            nums.push_back(current->val);
            current = current->next;
        }

        root = helper(nums, 0, nums.size() - 1);

        return root;
    }

    TreeNode* helper(std::vector<int> &nums, int start, int end) {

        if (start > end) {
            return nullptr;
        }

        int mid = (start + end) / 2;

        TreeNode *root = new TreeNode();
        root->val = nums[mid];

        root->left = helper(nums, start, mid - 1);
        root->right = helper(nums, mid + 1, end);

        return root;
    }
};
