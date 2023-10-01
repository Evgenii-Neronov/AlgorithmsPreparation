#include "FindMinimumInRotatedSortedArray.h"

// it's solution for leetcode problem:
// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/

int FindMinimumInRotatedSortedArray::findMin(vector<int>& nums) {

    int min = 0, max = nums.size() - 1;
    int mid;

    if (max == 0)
        return nums[0];

    if (nums[min] < nums[max])
        return nums[min];

    if (max == 1)
        return nums[max];

    while (min < max)
    {
        if (nums[min] < nums[max])
            return nums[min];

        mid = min + (max - min) / 2;

        if (mid == min)
            return nums[max];

        if (nums[mid] == nums[min])
        {
            min++;
            continue;
        }

        if (nums[mid] == nums[max])
        {
            max--;
            continue;
        }

        if (nums[mid] > nums[mid + 1])
        {
            mid = mid + 1;
            break;
        }

        if (nums[mid - 1] > nums[mid])
        {
            break;
        }

        if (nums[min] == nums[max] && nums[min] == nums[mid])
            break;

        if (nums[min] < nums[mid])
        {
            min = mid + 1;
        }

        if (nums[max] > nums[mid])
        {
            max = mid - 1;
        }
    }

    return nums[mid];
}
