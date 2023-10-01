#include <iostream>
#include <vector>


using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int rot = 0;

        int min1 = 0;
        int max1 = nums.size() - 1;
        int mid1;

        if (nums[min1] < nums[max1])
            rot = 0;
        else
            if (max1 == 1)
                rot = 1;
            else
                while (min1 < max1)
                {
                    mid1 = min1 + (max1 - min1) / 2;

                    if (nums[mid1] > nums[mid1 + 1])
                    {
                        rot = nums.size() - mid1 - 1;
                        break;
                    }
                    else
                        if (nums[mid1 - 1] > nums[mid1])
                        {
                            rot = nums.size() - mid1;
                            break;
                        }

                    if (nums[min1] < nums[mid1])
                        min1 = mid1;

                    if (nums[max1] > nums[mid1])
                        max1 = mid1;
                }

        int min = 0;
        int max = nums.size();
        int mid;

        int counter = 0;

        while (min < max)
        {
            counter++;

            mid = min + (max - min) / 2;

            cout << "iteration "s << counter << " mid = "s << mid << ", "
                << " " << nums[getIndex(mid, nums.size(), rot)] << "(" << getIndex(mid, nums.size(), rot)  << ")"
                << " >= " << nums[getIndex(min, nums.size(), rot)] << "(" << getIndex(min, nums.size(), rot) << ")"
                << endl;

            if (nums[getIndex(mid, nums.size(), rot)] <= target)
            {
                if (min == mid)
                    break;
                min = mid;
            }

            if (nums[getIndex(mid, nums.size(), rot)] >= target)
            {
                if (max == mid)
                    break;

                max = mid;
            }   
        }

        cout << "target = "s << target << endl;
        cout << "rot = "s << rot << endl;
        cout << "mid = "s << mid << endl;
        cout << "i = "s << getIndex(mid, nums.size(), rot) << endl;


        int result = getIndex(mid, nums.size(), rot);
        return nums[result] == target ? result : -1;
    }

    int getIndex(int i, int size, int rot)
    {
        int newIndex = i - rot;

        if (newIndex < 0)
            return size + newIndex;

        return newIndex;
    }
};

int main()
{
    std::vector<int> nums = { 3, 5, 1 };

    Solution s;

    int res = s.search(nums, 5);

    std::cout << "result: " << res << endl;
}

