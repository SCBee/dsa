/*
 * @lc app=leetcode id=226 lang=cpp
 *
 * [226] Invert Binary Tree
 *
 * https://leetcode.com/problems/invert-binary-tree/description/
 *
 * algorithms
 * Easy (75.83%)
 * Likes:    13382
 * Dislikes: 191
 * Total Accepted:    1.8M
 * Total Submissions: 2.4M
 * Testcase Example:  '[4,2,7,1,3,6,9]'
 *
 * Given the root of a binary tree, invert the tree, and return its root.
 *
 *
 * Example 1:
 *
 *
 * Input: root = [4,2,7,1,3,6,9]
 * Output: [4,7,2,9,6,3,1]
 *
 *
 * Example 2:
 *
 *
 * Input: root = [2,1,3]
 * Output: [2,3,1]
 *
 *
 * Example 3:
 *
 *
 * Input: root = []
 * Output: []
 *
 *
 *
 * Constraints:
 *
 *
 * The number of nodes in the tree is in the range [0, 100].
 * -100 <= Node.val <= 100
 *
 *
 */

#include "includes.h"
// @lc code=start
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
class Solution
{
   public:
    TreeNode* invertTree(TreeNode* root)
    {
        if (!root)
        {
            return nullptr;
        }

        invertTree(root->left);
        invertTree(root->right);

        TreeNode* tmp;
        tmp = root->left;
        root->left = root->right;
        root->right = tmp;

        return root;
    }
};
// @lc code=end

int main(int argc, char const* argv[])
{
    Solution obj;
    return 0;
}