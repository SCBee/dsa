/*
 * @lc app=leetcode id=199 lang=cpp
 *
 * [199] Binary Tree Right Side View
 *
 * https://leetcode.com/problems/binary-tree-right-side-view/description/
 *
 * algorithms
 * Medium (62.30%)
 * Likes:    11236
 * Dislikes: 764
 * Total Accepted:    1.1M
 * Total Submissions: 1.8M
 * Testcase Example:  '[1,2,3,null,5,null,4]'
 *
 * Given the root of a binary tree, imagine yourself standing on the right side
 * of it, return the values of the nodes you can see ordered from top to
 * bottom.
 *
 *
 * Example 1:
 *
 *
 * Input: root = [1,2,3,null,5,null,4]
 * Output: [1,3,4]
 *
 *
 * Example 2:
 *
 *
 * Input: root = [1,null,3]
 * Output: [1,3]
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
/*

do bfs and add the last node only to the output vector

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
    vector<int> rightSideView(TreeNode *root)
    {
        if (!root)
        {
            return {};
        }

        std::queue<TreeNode *> q;
        q.push(root);
        std::vector<int> out;

        while (q.size())
        {
            int size = q.size();
            for (int i = 0; i < size; ++i)
            {
                TreeNode *cur = q.front();
                q.pop();

                if (i == 0)
                {
                    out.push_back(cur->val);
                }

                if (cur->right)
                {
                    q.push(cur->right);
                }
                if (cur->left)
                {
                    q.push(cur->left);
                }
            }
        }

        return out;
    }
};
// @lc code=end

int main()
{
    Solution obj;

    TreeNode *root = build("[1,2,3,4]");

    std::vector<int> v = obj.rightSideView(root);
    vPrint(v);

    return 0;
}