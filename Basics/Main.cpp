#include "PrintUtils.hpp"

using namespace std;

class TreeNode {
private:
    int val;
    TreeNode* left;
    TreeNode* right;

public:
    TreeNode(){
        val = 0;
        left = nullptr;
        right = nullptr;
    }

    TreeNode(int v) {
        val = v;
        left = nullptr;
        right = nullptr;
    }

    TreeNode(int x, TreeNode* left, TreeNode* right) {
        val = x;
        left = left;
        right = right;
    }

    void insert(int v) {
        if (v < val) {
            if (left == nullptr) {
                left = new TreeNode(v);
            }
            else {
                left->insert(v);
            }
        }
        else {
            if (right == nullptr) {
                right = new TreeNode(v);
            }
            else {
                right->insert(v);
            }
        }
    }

    void print() {
        if (left) left->print();
        cout << val << " ";
        if (right) right->print();
    }

    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) {
            return nullptr;
        }

        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        invertTree(root->left);
        invertTree(root->right);

        return root;
    }


    ~TreeNode() {
        delete left;
        delete right;
    }
};


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
