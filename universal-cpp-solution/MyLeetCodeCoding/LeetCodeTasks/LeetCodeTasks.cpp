#include <iostream>
#include <vector>
#include "SearchInRotatedSortedArray.h"
#include "FindMinimumInRotatedSortedArray.h"
#include "SearchInRotatedSortedArrayII.h"

using namespace std;


int main()
{
    std::vector<int> nums = { 10,1,10,10,10 };

    /*
    SearchInRotatedSortedArray s;

    std::cout << "[SearchInRotatedSortedArray]" << endl;

    int res = s.search(nums, 5);

    std::cout << "-> result: " << res << endl << endl;
    */
    /*
    FindMinimumInRotatedSortedArray s1;

    std::cout << "[FindMinimumInRotatedSortedArray]" << endl;

    int res2 = s1.findMin(nums);

    std::cout << "-> result: " << res2 << endl << endl;
    */

    SearchInRotatedSortedArrayII s;

    bool res = s.search(nums, 1);

    std::cout << "-> result: " << res << endl << endl;

    
}