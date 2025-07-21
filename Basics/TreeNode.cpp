// Definition (Implementierung) der in der Header-Datei deklarierten Methoden
// Wird nicht direkt von anderen Dateien eingebunden – wird beim Kompilieren verlinkt
// Enthält Den Code für Konstruktoren, Methoden, Destruktor usw.

#include "TreeNode.hpp"

TreeNode::TreeNode() {
    val = 0;
    left = nullptr;
    right = nullptr;
}

TreeNode::TreeNode(int v) {
    val = v;
    left = nullptr;
    right = nullptr;
}

TreeNode::TreeNode(int x, TreeNode* l, TreeNode* r) {
    val = x;
    left = l;
    right = r;
}

void TreeNode::insert(int v) {
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

void TreeNode::print() const {
    if (left) left->print();
    std::cout << val << " ";
    if (right) right->print();
}

TreeNode* TreeNode::invertTree(TreeNode* root) {
    if (root == nullptr) return nullptr;

    TreeNode* temp = root->left;
    root->left = root->right;
    root->right = temp;

    invertTree(root->left);
    invertTree(root->right);

    return root;
}

TreeNode::~TreeNode() {
    delete left;
    delete right;
}
