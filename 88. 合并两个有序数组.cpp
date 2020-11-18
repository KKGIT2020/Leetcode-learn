// 给你两个有序整数数组 nums1 和 nums2，请你将 nums2 合并到 nums1 中，使 nums1 成为一个有序数组。
//
// 说明:
// 初始化 nums1 和 nums2 的元素数量分别为 m 和 n 。
// 你可以假设 nums1 有足够的空间（空间大小大于或等于 m + n）来保存 nums2 中的元素。
//
// 示例 :
// 输入:
// nums1 = [1, 2, 3, 0, 0, 0], m = 3
// nums2 = [2, 5, 6], n = 3
// 输出 : [1, 2, 2, 3, 5, 6]
//
// 链接：https ://leetcode-cn.com/problems/merge-sorted-array

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        if (m == 0)
        {
            swap(nums1, nums2);
            return;
        }

        int a = m - 1;      //指向数组nums1未排序元素末尾
        int b = n - 1;      //指向数组nums2末尾
        int c = m + n - 1;  //指向数组nums1末尾

        while (a >= 0 && b >= 0)
        {
            nums1[c--] = (nums1[a] > nums2[b]) ? nums1[a--] : nums2[b--];
        }
        // 最后一个while循环是考虑到 当原数组nums1中元素排序完 但数组nums2中元素未被合并完 出现的情况
        while (b >= 0)
            nums1[c--] = nums2[b--];

    }
}; 

// 作者：jjjjjz
// 链接：https ://leetcode-cn.com/problems/merge-sorted-array/solution/c-by-jjjjjz/
