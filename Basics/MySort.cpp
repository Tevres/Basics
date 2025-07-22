#include "MySort.hpp"
#include "PrintUtils.hpp"

namespace my_sort {

    int partition(std::vector<int>& vec, int low, int high)
    {
        int pivot = vec[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (vec[j] <= pivot) {
                i++;
                std::swap(vec[i], vec[j]);
            }
            print_utils::printVector(vec);
        }
        std::swap(vec[i + 1], vec[high]);
        return i + 1;
    }

    void quicksort(std::vector<int>& arr, int left, int right)
    {
        if (left < right) {
            int pi = partition(arr, left, right);
            quicksort(arr, left, pi - 1);
            quicksort(arr, pi + 1, right);
        }
    }

} // namespace my_sort
