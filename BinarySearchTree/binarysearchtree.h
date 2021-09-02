#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

#include "treenode.h"

class BinarySearchTree
{
public:
    BinarySearchTree();

    TreeNode getRoot();

    void treeWalk(TreeNode *Node);

    TreeNode treeSearch(TreeNode *Node, int key);

    TreeNode treeMinimum(TreeNode *Node);
    TreeNode treeMaximum(TreeNode *Node);

    TreeNode treeSuccessor(TreeNode *Node);
    TreeNode treePredecessor(TreeNode *Node);

    void insertNode(BinarySearchTree T, TreeNode *z);
    TreeNode removeNode(BinarySearchTree T, TreeNode *z);

private:
    TreeNode *root = new TreeNode;
};

#endif // BINARYSEARCHTREE_H
