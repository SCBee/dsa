/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 *
 * https://leetcode.com/problems/container-with-most-water/description/
 *
 * algorithms
 * Medium (54.20%)
 * Likes:    27210
 * Dislikes: 1503
 * Total Accepted:    2.5M
 * Total Submissions: 4.6M
 * Testcase Example:  '[1,8,6,2,5,4,8,3,7]'
 *
 * You are given an integer array height of length n. There are n vertical
 * lines drawn such that the two endpoints of the i^th line are (i, 0) and (i,
 * height[i]).
 *
 * Find two lines that together with the x-axis form a container, such that the
 * container contains the most water.
 *
 * Return the maximum amount of water a container can store.
 *
 * Notice that you may not slant the container.
 *
 *
 * Example 1:
 *
 *
 * Input: height = [1,8,6,2,5,4,8,3,7]
 * Output: 49
 * Explanation: The above vertical lines are represented by array
 * [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the
 * container can contain is 49.
 *
 *
 * Example 2:
 *
 *
 * Input: height = [1,1]
 * Output: 1
 *
 *
 *
 * Constraints:
 *
 *
 * n == height.length
 * 2 <= n <= 10^5
 * 0 <= height[i] <= 10^4
 *
 *
 */

/*

move the one that is smaller
*/
#include "includes.h"
// @lc code=start
class Solution
{
   public:
    int maxArea(vector<int>& height)
    {
        int l = 0;
        int r = height.size() - 1;

        int maxArea = 0;
        while (l < r)
        {
            maxArea = std::max(maxArea, std::min(height[r], height[l]) * (r - l));

            if (height[l] > height[r])
            {
                r--;
            }
            else
            {
                l++;
            }
        }

        return maxArea;
    }
};
// @lc code=end

int main(int argc, char const* argv[])
{
    Solution obj;

    vector<int> v1{1, 8, 6, 2, 5, 4, 8, 3, 7};

    obj.maxArea(v1);
    return 0;
}