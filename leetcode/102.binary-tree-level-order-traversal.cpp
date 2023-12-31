/*
 * @lc app=leetcode id=102 lang=cpp
 *
 * [102] Binary Tree Level Order Traversal
 *
 * https://leetcode.com/problems/binary-tree-level-order-traversal/description/
 *
 * algorithms
 * Medium (65.79%)
 * Likes:    14546
 * Dislikes: 290
 * Total Accepted:    2M
 * Total Submissions: 3M
 * Testcase Example:  '[3,9,20,null,null,15,7]'
 *
 * Given the root of a binary tree, return the level order traversal of its
 * nodes' values. (i.e., from left to right, level by level).
 *
 *
 * Example 1:
 *
 *
 * Input: root = [3,9,20,null,null,15,7]
 * Output: [[3],[9,20],[15,7]]
 *
 *
 * Example 2:
 *
 *
 * Input: root = [1]
 * Output: [[1]]
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
 * The number of nodes in the tree is in the range [0, 2000].
 * -1000 <= Node.val <= 1000
 *
 *
 */

/*

this is a straightforward BFS implementation
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
    vector<vector<int>> levelOrder(TreeNode* root)
    {
        // edge case where root is invalid
        if (!root)
        {
            return {};
        }

        // output
        vector<vector<int>> v;

        queue<TreeNode*> q;
        q.push(root);

        while (q.size())
        {
            size_t len = q.size();

            vector<int> tmp;
            for (size_t i = 0; i < len; i++)
            {
                // get next node
                TreeNode* cur = q.front();
                q.pop();

                // add cur node value to tmp vec (which will get pushed to the final vector, v)
                tmp.push_back(cur->val);

                // add nodes to q
                if (cur->left)
                {
                    q.push(cur->left);
                }
                if (cur->right)
                {
                    q.push(cur->right);
                }
            }

            v.push_back(tmp);
        }
        return v;
    }
};
// @lc code=end

int main(int argc, char const* argv[])
{
    Solution obj;

    TreeNode* root1 = build("[3,9,20,null,null,15,7]");
    TreeNode* root2 = build("[1]");
    TreeNode* root3 = build("[]");

    vecPrint2D(obj.levelOrder(root1));
    vecPrint2D(obj.levelOrder(root2));
    vecPrint2D(obj.levelOrder(root3));

    return 0;
}
