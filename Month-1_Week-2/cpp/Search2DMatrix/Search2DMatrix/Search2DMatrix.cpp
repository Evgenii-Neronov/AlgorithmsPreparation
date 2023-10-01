#include <iostream>
#include <vector>

// it's solution of problem: 
// https://leetcode.com/problems/search-a-2d-matrix/

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int min1 = 0;
        int max1 = matrix.size();

        int min2 = 0;
        int max2 = matrix[0].size();

        int mid1 = 0;


        while (min1 < max1)
        {
            mid1 = min1 + (max1 - min1) / 2;

            if (matrix[mid1][0] <= target)
            {
                if (min1 == mid1)
                    break;

                min1 = mid1;
            }
            else
            {
                if (max1 == mid1)
                    break;

                max1 = mid1;
            }
        }

        cout << mid1 << endl;

        int mid2 = 0;

        while (min2 < max2)
        {
            mid2 = min2 + (max2 - min2) / 2;

            if (matrix[mid1][mid2] <= target)
            {
                if (min2 == mid2)
                    break;

                min2 = mid2;
            }
            else
            {
                if (max2 == mid2)
                    break;

                max2 = mid2;
            }
        }

        cout << mid2 << endl;

        return matrix[mid1][mid2] == target;
    }
};

int main()
{
    std::vector<std::vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    Solution s;

    bool res = s.searchMatrix(matrix, 3);

    std::cout << "result: " << res << endl;
}

