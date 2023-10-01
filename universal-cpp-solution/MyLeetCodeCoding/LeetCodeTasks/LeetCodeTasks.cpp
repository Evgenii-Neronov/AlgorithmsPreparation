#include <iostream>
#include <vector>
#include "SearchInRotatedSortedArray.h"
#include "FindMinimumInRotatedSortedArray.h"

using namespace std;


int main()
{
    std::vector<int> nums = { 3, 5, 1 };

    SearchInRotatedSortedArray s;

    std::cout << "[SearchInRotatedSortedArray]" << endl;

    int res = s.search(nums, 5);

    std::cout << "-> result: " << res << endl << endl;

    FindMinimumInRotatedSortedArray s1;

    std::cout << "[FindMinimumInRotatedSortedArray]" << endl;

    int res2 = s1.findMin(nums);

    std::cout << "-> result: " << res2 << endl << endl;

    
}