// Deklaration der Klasse, ihrer Memberfunktionen und Membervariablen
// Wird von anderen Dateien(z.B.main.cpp) per #include eingebunden
// enthält Klassendefinition (ohne Funktionskörper)

#ifndef TREENODE_HPP
#define TREENODE_HPP

#include <iostream>

class TreeNode {
private:
    int val;
    TreeNode* left;
    TreeNode* right;

public:
    TreeNode();
    TreeNode(int v);
    TreeNode(int x, TreeNode* left, TreeNode* right);

    void insert(int v);
    void print() const;
    TreeNode* invertTree(TreeNode* root);

    ~TreeNode();
};

#endif // TREENODE_HPP
