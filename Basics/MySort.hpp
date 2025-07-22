#ifndef MY_SORT_HPP
#define MY_SORT_HPP

#include <iostream>
#include <vector>
#include <algorithm>

namespace my_sort {
    int partition(std::vector<int>& vec, int low, int high);
    void quicksort(std::vector<int>& vec, int low, int high);
}

#endif // MY_SORT