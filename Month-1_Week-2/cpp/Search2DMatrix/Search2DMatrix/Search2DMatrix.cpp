#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {



        return true;
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

