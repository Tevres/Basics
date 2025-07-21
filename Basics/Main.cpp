#include "PrintUtils.hpp"
#include "TreeNode.hpp"

using namespace std;

int main() {
    vector<int> one = { 9, 5, 7, 2, 3, 1, 6, 4, 7, 3, 8 };
    vector<std::vector<int>> two = { {1, 2, 3}, {9, 8, 7}, {5, 4, 6} };
    //string rootPath = "../";
    TreeNode* root = new TreeNode(10);
    root->insert(5);
    root->insert(15);
    root->insert(3);
    root->insert(7);
    root->insert(12);
    root->insert(18);

    // test cases
    print_utils::printVector(one);
    print_utils::print2DVector(two);
    //print_utils::printDirectoryTree(rootPath);
    root->print();
    delete root;

    // int main return value
    return 0;
}
