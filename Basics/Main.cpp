#include "PrintUtils.hpp"

using namespace std;

int main() {
    vector<int> one = { 9, 5, 7, 2, 3, 1, 6, 4, 7, 3, 8 };
    vector<std::vector<int>> two = { {1, 2, 3}, {9, 8, 7}, {5, 4, 6} };
    string rootPath = "../";

    // test cases
    print_utils::printVector(one);
    print_utils::print2DVector(two);
    print_utils::printDirectoryTree(rootPath);

    return 0;
}
