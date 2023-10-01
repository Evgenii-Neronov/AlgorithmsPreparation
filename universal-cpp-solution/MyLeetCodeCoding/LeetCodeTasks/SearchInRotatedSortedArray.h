#pragma once
#include <vector>
#include <iostream>

using namespace std;

class SearchInRotatedSortedArray {
public:
    int search(vector<int>& nums, int target);

    int getIndex(int i, int size, int rot);
};