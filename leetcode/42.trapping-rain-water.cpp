/*
 * @lc app=leetcode id=42 lang=cpp
 *
 * [42] Trapping Rain Water
 *
 * https://leetcode.com/problems/trapping-rain-water/description/
 *
 * algorithms
 * Hard (60.00%)
 * Likes:    29761
 * Dislikes: 431
 * Total Accepted:    1.8M
 * Total Submissions: 2.9M
 * Testcase Example:  '[0,1,0,2,1,0,1,3,2,1,2,1]'
 *
 * Given n non-negative integers representing an elevation map where the width
 * of each bar is 1, compute how much water it can trap after raining.
 *
 *
 * Example 1:
 *
 *
 * Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
 * Output: 6
 * Explanation: The above elevation map (black section) is represented by array
 * [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue
 * section) are being trapped.
 *
 *
 * Example 2:
 *
 *
 * Input: height = [4,2,0,3,2,5]
 * Output: 9
 *
 *
 *
 * Constraints:
 *
 *
 * n == height.length
 * 1 <= n <= 2 * 10^4
 * 0 <= height[i] <= 10^5
 *
 *
 */

/*



*/
#include "includes.h"
// @lc code=start
class Solution
{
   public:
    int trap(vector<int>& height)
    {
    }
};
// @lc code=end

int main(int argc, char const* argv[])
{
    Solution obj;

    vector<int> v1{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    vector<int> v2{4, 2, 0, 3, 2, 5};

    cout << obj.trap(v1) << "\n";  // 6
    cout << obj.trap(v2) << "\n";  // 9
    return 0;
}