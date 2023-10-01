#include <iostream>
#include <vector>
#include "SearchInRotatedSortedArray.hpp"

using namespace std;


int main()
{
    std::vector<int> nums = { 3, 5, 1 };

    SearchInRotatedSortedArray s;

    int res = s.search(nums, 5);

    std::cout << "result: " << res << endl;
}