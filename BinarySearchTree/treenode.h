#ifndef TREENODE_H
#define TREENODE_H


class TreeNode
{
public:
    TreeNode() {left = nullptr; right = nullptr; parent = nullptr; key = 0;}

    TreeNode *left;
    TreeNode *right;
    TreeNode *parent;
    int key;
};

#endif // TREENODE_H
